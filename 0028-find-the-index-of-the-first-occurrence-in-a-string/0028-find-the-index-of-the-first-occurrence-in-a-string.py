class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # if(needle in haystack):
        #     return haystack.find(needle)
        # return -1
        tlen=len(haystack) - len(needle)
        i = 0
        while(i<tlen+1):
            if(haystack[i:i+len(needle)]==needle):
                return i
            i += 1
        return -1

        