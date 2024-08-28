class Solution:
    def nearestPalindromic(self, n: str) -> str:

        def make_palindrome(left_half, length, is_even):
            palindrome = left_half
            if not is_even:
                left_half //= 10
            while left_half > 0:
                palindrome = palindrome * 10 + left_half % 10
                left_half //= 10
            return palindrome


        if len(n) == 1:
            return str(int(n) - 1)

        num = int(n)
        length = len(n)
        
        candidates = [
            10**(length - 1) - 1,
            10**length + 1
        ]
        

        if length % 2 == 0:
            left_half = int(n[:length//2])
            candidates.extend([
                make_palindrome(left_half - 1, length, True),
                make_palindrome(left_half, length, True),
                make_palindrome(left_half + 1, length, True)
            ])
        else:
            left_half = int(n[:length//2 + 1])
            candidates.extend([
                make_palindrome(left_half - 1, length, False),
                make_palindrome(left_half, length, False),
                make_palindrome(left_half + 1, length, False)
            ])
        
        result = float('inf')
        for candidate in candidates:
            if candidate != num:
                if abs(candidate - num) < abs(result - num) or \
                   (abs(candidate - num) == abs(result - num) and candidate < result):
                    result = candidate
        
        return str(result)
    
    