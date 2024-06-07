class Solution:


    def match(word: str, dictionary: List[str]) -> str:
        sorted_dict=sorted(dictionary, key=len)
        for prefix in sorted_dict:
            if(word.startswith(prefix)):
                return prefix
        return word

    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        sl=sentence.split()
        rs=[]

        for word in sl:
            best=Solution.match(word,dictionary)
            rs.append(best if best else word)
        
        return " ".join(rs)

        