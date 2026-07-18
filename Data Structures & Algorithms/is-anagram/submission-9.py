import numpy as np

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        chars_s = np.zeros(26, dtype=int)
        chars_t = np.zeros(26, dtype=int)

        for c in s:
            
            chars_s [ord(c) - 97] += 1
            print(chars_s[ord(c) - 97])
            

        
        for c in t:
            chars_t [ord(c) - 97] += 1
            print(chars_t[ord(c) - 97])
        
        if np.array_equal(chars_s, chars_t):
            return True
        return False 