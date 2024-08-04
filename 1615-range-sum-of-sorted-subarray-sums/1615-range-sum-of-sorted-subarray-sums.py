class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        n = len(nums)
        result = []
        MOD = 10**9 + 7
    
        for i in range(n):
            current_sum = 0
            for j in range(i, n):
                current_sum += nums[j]
                result.append(current_sum)
        
        result.sort()
        # print(result)
        sum=0
        for i in range(left-1,right):
            sum+=result[i]

        return sum%MOD
        