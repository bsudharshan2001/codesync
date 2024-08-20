class Solution:
    def isHappy(self, n: int) -> bool:

        total=n
        x=n

        while total > 9:
            total = 0
            while x > 0:
                d = x % 10
                total += d * d
                x = int(x / 10)
            x = total

        if(total==1 or total==7):
            return True

        return False
        