class Solution:
    def reverseVowels(self, s: str) -> str:
        s = list(s)
        stack=[]
        vowel='aeiouAEIOU'
        for c in s:
            if(c in vowel):
                stack.append(c)
        # print(stack)
        
        for i in range(len(s)):
            if s[i] in vowel:
                s[i] = stack.pop()

        return ''.join(s)
        


        