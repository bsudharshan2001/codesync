class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if not s:
            return 0

        sign = 1
        index = 0
        result = 0
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31

        if s[index] in ['+', '-']:
            sign = -1 if s[index] == '-' else 1
            index += 1

        while index < len(s) and s[index].isdigit():
            digit = int(s[index])
            
            if result > INT_MAX // 10 or (result == INT_MAX // 10 and digit > INT_MAX % 10):
                return INT_MAX if sign == 1 else INT_MIN
            
            result = result * 10 + digit
            index += 1

        return sign * result
        



        