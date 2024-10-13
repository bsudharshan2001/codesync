class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        ans=[]
        def find_num(y):
            for x in range(y + 1):
                if x | (x + 1) == y:
                    return x
            return -1

        for i in range(len(nums)):
            ans.append(find_num(nums[i]))

        return ans
        