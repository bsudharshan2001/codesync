class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        lst=[]
        for i in range(len(nums)):
            lst.append(nums[nums[i]])
        
        return lst
        