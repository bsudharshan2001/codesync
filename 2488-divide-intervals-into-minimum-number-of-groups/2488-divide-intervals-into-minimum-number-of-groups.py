class Solution:
    def minGroups(self, intervals: List[List[int]]) -> int:
        events = []
    
        for start, end in intervals:
            events.append((start, 1)) 
            events.append((end + 1, -1))
        
        events.sort()
        
        max_overlap = 0
        current_overlap = 0
        
        for _, event in events:
            current_overlap += event
            max_overlap = max(max_overlap, current_overlap)
        
        return max_overlap