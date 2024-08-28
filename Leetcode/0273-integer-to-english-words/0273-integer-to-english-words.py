class Solution:
    def numberToWords(self, num: int) -> str:
        ones = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
        teens = ["Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]
        tens = ["Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]
        ht = ["Hundred", "Thousand", "Million", "Billion"]
        
        if num == 0:
            return "Zero"
        
        def helper(n):
            if n == 0:
                return ""
            elif n < 10:
                return ones[n-1]
            elif n < 20:
                return teens[n-10]
            elif n < 100:
                return tens[n//10-2] + (" " + helper(n%10) if n%10 != 0 else "")
            elif n < 1000:
                return ones[n//100-1] + " Hundred" + (" " + helper(n%100) if n%100 != 0 else "")
        
        result = ""
        billion = num // 1000000000
        million = (num % 1000000000) // 1000000
        thousand = (num % 1000000) // 1000
        rest = num % 1000
        
        if billion:
            result += helper(billion) + " Billion"
        if million:
            result += " " + helper(million) + " Million" if result else helper(million) + " Million"
        if thousand:
            result += " " + helper(thousand) + " Thousand" if result else helper(thousand) + " Thousand"
        if rest:
            result += " " + helper(rest) if result else helper(rest)
        
        return result.strip()

            