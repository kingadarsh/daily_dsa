class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sl=[0]*26
        tl=[0]*26
        for i in s:
            val=ord(i)-ord('a')
            sl[val]+=1
        

        for i in t:
            val=ord(i)-ord('a')
            tl[val]+=1

        return sl==tl