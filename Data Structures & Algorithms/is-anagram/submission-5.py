from collections import defaultdict
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mapS = defaultdict(int)
        mapT = defaultdict(int)

        for char in s:
            mapS[char]+=1

        for char in t:
            mapT[char]+=1
        range_val =  ord('z')-ord('a')
        for idx in range(range_val+1):
            char =  chr(idx + ord('a'))
            if(mapS[char]!=mapT[char]):
                return False

        return True           
        