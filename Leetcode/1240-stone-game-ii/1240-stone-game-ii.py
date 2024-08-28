class Solution:
    def stoneGameII(self, piles: List[int]) -> int:
        n = len(piles)
        suffix_sum = [0] * (n + 1)
        for i in range(n - 1, -1, -1):
            suffix_sum[i] = suffix_sum[i + 1] + piles[i]
        
        dp = [[0] * (n + 1) for _ in range(n)]
        
        for i in range(n - 1, -1, -1):
            for m in range(n, 0, -1):
                if i + 2 * m >= n:
                    dp[i][m] = suffix_sum[i]
                else:
                    dp[i][m] = max(suffix_sum[i] - dp[i + x][max(m, x)] for x in range(1, 2 * m + 1))
        
        return dp[0][1]
        