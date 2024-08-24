class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        i=0
        j=n
        lst=[]
        while(i<n):
            lst.append(nums[i])
            lst.append(nums[j])
            i+=1
            j+=1
        
        return lst
        