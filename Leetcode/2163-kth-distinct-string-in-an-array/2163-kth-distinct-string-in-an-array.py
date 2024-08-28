class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        x=Counter(arr)
        lst=[]
        for i in x.keys():
            if(x[i]==1):
                lst.append(i)
        print(lst)
        if(len(lst)<k):
            return ""
        return lst[k-1]


        