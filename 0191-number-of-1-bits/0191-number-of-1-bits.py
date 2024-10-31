class Solution:
    def hammingWeight(self, n: int) -> int:
        x=Counter(str(bin(n)[2:]))
        print(x)

        return x['1']
        