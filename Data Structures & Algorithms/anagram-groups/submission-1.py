class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        
        for str in strs:
            freq = [0]*26
            for c in str:
                freq[ord(c)-ord('a')] += 1
            res[tuple(freq)].append(str)
        return list(res.values())