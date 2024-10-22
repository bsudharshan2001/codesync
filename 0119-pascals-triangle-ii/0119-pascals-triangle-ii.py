import math
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        res=[]
        for i in range(rowIndex+1):
            res.append(int(math.factorial(rowIndex) / (math.factorial(rowIndex-i) * math.factorial(i)) ))

        return res
        