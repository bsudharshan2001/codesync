class Solution:
    def findComplement(self, num: int) -> int:
        bn="{0:b}".format(int(num))
        print(bn)
        comp=""
        for c in bn:
            if(c=='1'):
                comp+='0'
            else: comp+='1'
        
        print(comp)

        return  int(comp,2)
        