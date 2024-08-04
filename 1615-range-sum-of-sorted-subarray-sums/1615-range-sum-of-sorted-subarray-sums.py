class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        l = len(nums)
        result = []
        MOD = 10**9 + 7
    
        for i in range(l):
            current_sum = 0
            for j in range(i, l):
                current_sum += nums[j]
                result.append(current_sum)
        
        result.sort()
        # print(result)
        sum=0
        for i in range(left-1,right):
            sum+=result[i]

        return sum%MOD
        