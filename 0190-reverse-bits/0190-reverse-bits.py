class Solution:
    def reverseBits(self, n: int) -> int:
        res='{:032b}'.format(n)
        return int(res[::-1], 2)
            
        