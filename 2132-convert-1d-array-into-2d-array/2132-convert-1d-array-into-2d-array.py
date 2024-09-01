class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:

        if(m*n!=len(original)):
            return []
        res = []
        i=0
        temp=[]
        for i in range(len(original)):
            temp.append(original[i])
            if((i+1)%n==0):
                res.append(temp)
                temp=[]
        return res

        