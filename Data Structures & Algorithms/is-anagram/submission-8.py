class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dir_s = {}
        dir_t = {}

        for c in s:
            if c in dir_s:
                dir_s[c] = dir_s[c] + 1
            else:
                dir_s.update({c: 0})

        
        for c in t:
            if c in dir_t:
                dir_t[c] = dir_t[c] + 1
            else:
                dir_t.update({c: 0})
        
        if dir_s == dir_t:
            return True
        return False 