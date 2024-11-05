class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 1
        for i in flowerbed:
            if i == 0:
                count +=1
            if i == 1:
                count = 0
            if count == 3 :
                n -=1
                count = 1
            if  n <= 0:
                return True
        if count == 2:
            n-=1
        return True if n <= 0  else  False