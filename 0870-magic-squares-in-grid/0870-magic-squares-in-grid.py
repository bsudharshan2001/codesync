class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        def is_magic_square(i, j):
            nums = set()
            for x in range(i, i + 3):
                for y in range(j, j + 3):
                    if grid[x][y] < 1 or grid[x][y] > 9 or grid[x][y] in nums:
                        return False
                    nums.add(grid[x][y])
            
            row_sums = [sum(grid[x][j:j+3]) for x in range(i, i+3)]
            if len(set(row_sums)) != 1:
                return False
            
            col_sums = [sum(grid[x][y] for x in range(i, i+3)) for y in range(j, j+3)]
            if len(set(col_sums)) != 1 or col_sums[0] != row_sums[0]:
                return False
            
            diag1 = sum(grid[i+k][j+k] for k in range(3))
            diag2 = sum(grid[i+k][j+2-k] for k in range(3))
            if diag1 != diag2 or diag1 != row_sums[0]:
                return False
            
            return True

        if len(grid) < 3 or len(grid[0]) < 3:
            return 0

        count = 0
        for i in range(len(grid) - 2):
            for j in range(len(grid[0]) - 2):
                if is_magic_square(i, j):
                    count += 1
        
        return count