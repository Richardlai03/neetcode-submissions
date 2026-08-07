class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s = s.replace(' ', '')
        s = ''.join(filter(str.isalnum, s))
        i = 0
        b = -1
        while i < len(s)//2:
            if s[i] != s[b]:
                return False
            i += 1
            b -= 1
        return True
