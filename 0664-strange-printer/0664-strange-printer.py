class Solution:
    def strangePrinter(self, s: str) -> int:
        n = len(s)
        
        s = ''.join(ch for i, ch in enumerate(s) if i == 0 or ch != s[i-1])
        n = len(s)
        
        dp = [[0] * n for _ in range(n)]
        
        for length in range(1, n + 1):
            for i in range(n - length + 1):
                j = i + length - 1
                
                if length == 1:
                    dp[i][j] = 1
                elif s[i] == s[j]:
                    dp[i][j] = dp[i][j-1]
                else:
                    dp[i][j] = min(dp[i][k] + dp[k+1][j] for k in range(i, j))
        
        return dp[0][n-1]