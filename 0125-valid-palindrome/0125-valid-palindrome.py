class Solution:
    def isPalindrome(self, s: str) -> bool:
        text=''.join(char for char in s if char.isalnum()).lower()
        # print(text)
        reverse=text[::-1]
        # print(reverse)

        return text==reverse
        