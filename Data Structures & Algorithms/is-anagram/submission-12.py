class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):
            return False
        
        chars = [0] * 26

        for i in range(len(s)):
            ascii_s = ord(s[i]) - ord('a')
            ascii_t = ord(t[i]) - ord('a')
            chars[ascii_s] += 1
            chars[ascii_t] -= 1
        
        if chars != [0] * 26:
            return False
        
        return True






