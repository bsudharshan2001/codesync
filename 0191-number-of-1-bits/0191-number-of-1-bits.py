class Solution:
    def hammingWeight(self, n: int) -> int:
        x=Counter(str(bin(n)[2:]))
        return x['1']
        