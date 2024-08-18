class Solution:
    def maxArea(self, height: List[int]) -> int:
        i = 0
        j = len(height) - 1
        max_w = 0

        while i < j:
            cur_w = min(height[i], height[j]) * (j - i)
            max_w = max(max_w, cur_w)
            
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1

        return max_w


        