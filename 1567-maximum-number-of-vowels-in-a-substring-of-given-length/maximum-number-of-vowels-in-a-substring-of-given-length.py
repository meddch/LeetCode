class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        max_count=0
        counter=0
        for i in range(len(s)-k+1):
            string=s[i:k]
            counter=string.count('a')+string.count('e')+string.count('i')+string.count('o')+string.count('u')
            k+=1
            max_count=max(max_count,counter)
        return max_count 


        