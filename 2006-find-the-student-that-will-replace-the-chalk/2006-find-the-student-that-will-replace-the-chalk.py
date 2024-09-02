class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        # flag=True
        # i=0
        # while(flag):
        #     k-=chalk[i]
        #     # print(f"Student number {i} uses {chalk[i]}, so k = {k}")
        #     if(k<0):
        #         # print(k)
        #         return i%len(chalk)
        #     elif(k==0):
        #         return (i+1)%len(chalk)
        #     i+=1
        #     i=i%len(chalk)

        total_chalk = sum(chalk)
        k = k % total_chalk
        
        for i, amount in enumerate(chalk):
            if k < amount:
                return i
            k -= amount
        
        return 0 
        