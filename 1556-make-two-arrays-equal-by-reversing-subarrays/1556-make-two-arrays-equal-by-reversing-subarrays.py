class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        N = len(arr)
        target.sort()
        arr.sort()

        for i in range(0, N):
            if (target[i] != arr[i]):
                return False

        return True
        