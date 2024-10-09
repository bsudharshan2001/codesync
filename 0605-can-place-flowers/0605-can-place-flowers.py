class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if n==0:
            return True
        if len(flowerbed) < n or flowerbed.count(0) < n:
            return False
        if len(flowerbed) == 1:
            return flowerbed[0] == 0 and n <= 1
        
        i = 0
        while i < len(flowerbed):
            if i == 0 and flowerbed[i] == 0 and (i + 1 >= len(flowerbed) or flowerbed[i + 1] == 0):
                n -= 1
                flowerbed[i] = 1
                i += 2
                continue
            elif i == len(flowerbed) - 1 and flowerbed[i] == 0 and flowerbed[i - 1] == 0:
                n -= 1
                flowerbed[i] = 1
                break   
            elif flowerbed[i] == 0 and (i + 1 >= len(flowerbed) or flowerbed[i + 1] != 1) and (i - 1 < 0 or flowerbed[i - 1] != 1):
                flowerbed[i] = 1
                n -= 1
                i += 2
                continue
            i += 1
        
        return n <= 0
