from itertools import combinations

class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        max_or = 0
        for num in nums:
            max_or |= num
        
        def subset_or(subset):
            result = 0
            for num in subset:
                result |= num
            return result
        
        count = 0
        n = len(nums)
        for i in range(1, n + 1):
            for subset in combinations(nums, i):
                if subset_or(subset) == max_or:
                    count += 1
        
        return count
