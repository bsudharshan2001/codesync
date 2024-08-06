class Solution:
    def minimumPushes(self, word: str) -> int:
        lst=list(word)
        lst.sort(reverse=True)
        x=Counter(lst)
        # print(x)
        cost=0
        counter=1
        multiplier=1

        for i, j in x.most_common():
            if(counter>8):
                multiplier+=1
                counter=1
            cost+=multiplier*j
            # print(f"Count = {counter} ---- E = {i} * {j} - > Cost = {cost} --- Mul = {multiplier}\n")
            counter+=1
            

        return cost