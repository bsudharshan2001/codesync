class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        # score=0
        # nums.sort(reverse=True)
        # while(k>0):
        #     ele=max(nums)
        #     i=nums.index(ele)
        #     score+=ele
        #     nums[i]=ceil(nums[i]/3)
        #     # nums.sort(reverse=True)
        #     k-=1
        
        max_heap = [-num for num in nums]
        heapq.heapify(max_heap)

        score = 0
        for _ in range(k):
            max_val = -heapq.heappop(max_heap)
            score += max_val
            heapq.heappush(max_heap, -ceil(max_val / 3))

        return score


        