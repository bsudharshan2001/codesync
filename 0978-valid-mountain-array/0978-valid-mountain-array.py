class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        if len(arr)<3:
            return False
        count=0
        icount=0
        loc=0
        for i in range(len(arr)-1):
            if arr[i]<arr[i+1]:
                icount+=1
                continue
            elif arr[i]>arr[i+1]:
                count+=1
                if count==1 :
                    loc=i+1
            else: return False
        
        if count==len(arr)-loc and icount!=0:
            return True

        return False            
                
        