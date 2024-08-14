class Solution:
    def smallestDistancePair(self, nums: List[int], k: int) -> int:

        # differences = []
        # for x in range(len(nums)):
        #     for y in range(x+1, len(nums)):
        #         differences.append(abs(nums[x] - nums[y]))
        
        # sorted_differences = sorted(differences)
        
        # if 1 <= k <= len(sorted_differences):
        #     return sorted_differences[k-1]
        # else:
        #     return None
        nums.sort()
        def helper(dist):
            l=0
            res=0
            for r in range(len(nums)):
                while(nums[r]-nums[l]>dist):
                    l+=1
                res+=r-l
            return res

        
        l,r=0,max(nums)
        while(l<r):
            m=l+((r-l)//2)
            pairs=helper(m)
            if(pairs>=k):
                r=m
            else:
                l=m+1
        return r 
        
        