class Solution:
    def smallestRange(self, nums: List[List[int]]) -> List[int]:
        min_heap = []
        max_value = float('-inf')
        
        for i in range(len(nums)):
            heapq.heappush(min_heap, (nums[i][0], i, 0))
            max_value = max(max_value, nums[i][0])
        
        smallest_range = [float('-inf'), float('inf')]
        
        while min_heap:
            min_value, list_index, element_index = heapq.heappop(min_heap)
            
            if max_value - min_value < smallest_range[1] - smallest_range[0]:
                smallest_range = [min_value, max_value]
            
            if element_index + 1 == len(nums[list_index]):
                break
            
            next_value = nums[list_index][element_index + 1]
            heapq.heappush(min_heap, (next_value, list_index, element_index + 1))
            max_value = max(max_value, next_value)
        
        return smallest_range