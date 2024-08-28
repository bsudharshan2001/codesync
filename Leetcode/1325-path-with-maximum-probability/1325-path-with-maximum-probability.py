from typing import List
import heapq

class Solution:
    def maxProbability(self, n: int, edges: List[List[int]], succProb: List[float], start_node: int, end_node: int) -> float:
        graph = [[] for _ in range(n)]
        for (a, b), prob in zip(edges, succProb):
            graph[a].append((b, prob))
            graph[b].append((a, prob))
        
        pq = [(-1, start_node)]
        probabilities = [0] * n
        probabilities[start_node] = 1
        
        while pq:
            prob, node = heapq.heappop(pq)
            prob = -prob
            
            if node == end_node:
                return prob
            
            if prob < probabilities[node]:
                continue
            
            for neighbor, edge_prob in graph[node]:
                new_prob = prob * edge_prob
                if new_prob > probabilities[neighbor]:
                    probabilities[neighbor] = new_prob
                    heapq.heappush(pq, (-new_prob, neighbor))
        
        return 0