class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        alphs_s = {}
        alphs_t = {}

        for i in range(len(s)):
            alphs_s[s[i]] = 1 + alphs_s.get(s[i], 0)
            alphs_t[t[i]] = 1 + alphs_t.get(t[i], 0)

        if alphs_s != alphs_t:
            return False
        
        return True