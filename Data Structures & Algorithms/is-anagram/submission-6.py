class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        mpp = {}
        for x in s:
           mpp[x] = mpp.get(x,0)+1
        for x in t:
            if x not in mpp or mpp[x]==0:
                return False
            mpp[x] -= 1
        return True