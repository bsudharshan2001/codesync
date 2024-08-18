class Solution:
    
    def nthUglyNumber(self, n: int) -> int:

        # Taking o(n* m) time complexity for large numbers
        # def isUgly(n:int)-> bool:
        #     if(n==1):
        #         return True
        #     if(n<=0):
        #         return False
            
        #     if(n%2==0):
        #         return isUgly(n/2)
        #     if(n%3==0):
        #         return isUgly(n/3)
        #     if(n%5==0):
        #         return isUgly(n/5)
        
        #     return False

        # num=1
        # count=0
        # res=0

        # while(count<=n):
        #     if(isUgly(num)):
        #         count+=1
        #         if(count==n):
        #             res=num
        #     num+=1
        
        # return res

        ugly = [1]
        i2, i3, i5 = 0, 0, 0
        
        for _ in range(1, n):
            next_ugly = min(ugly[i2] * 2, ugly[i3] * 3, ugly[i5] * 5)
            ugly.append(next_ugly)
            
            if next_ugly == ugly[i2] * 2:
                i2 += 1
            if next_ugly == ugly[i3] * 3:
                i3 += 1
            if next_ugly == ugly[i5] * 5:
                i5 += 1
        
        return ugly[-1]
        