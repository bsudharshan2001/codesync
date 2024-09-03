class Solution:
    def getLucky(self, s: str, k: int) -> int:
        t1 = ''
        for x in s:
            t1 += str(ord(x) - 96)
        
        for _ in range(k):
            t1 = str(sum(int(digit) for digit in t1))
        
        return int(t1)


        