class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        ans=0
        i=0
        for i, column in enumerate(reversed(columnTitle)):
            ans+=(ord(column) - 64) * 26**i
            i+=1
        
        return ans

        