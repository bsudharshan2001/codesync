class Solution:
    def isUgly(self, n: int) -> bool:

        def helper(n):
            if(n==1):
                return True
            if(n<=0):
                return False

            if(n%2==0):
                return helper(n/2)
            if(n%3==0):
                return helper(n/3)
            if(n%5==0):
                return helper(n/5)
            
            return False

        return helper(n)
        