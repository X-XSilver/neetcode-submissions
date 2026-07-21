class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        
        res = defaultdict(list)
        
        for str in strs:
            charset = [0] * 26
            for char in str:
                charset[ord(char) - ord('a')] += 1
            res[tuple(charset)].append(str)
        return list(res.values())

            

