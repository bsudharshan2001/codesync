class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        n=len(nums)
        ones=nums.count(1)
        l=0
        wones=max_wones=0
        for r in range(2*n):
            if(nums[r%n]):
                wones+=1
            if(r-l+1>ones):
                wones-=nums[l%n]
                l+=1
            max_wones=max(wones,max_wones)
            
        
        return ones-max_wones

        