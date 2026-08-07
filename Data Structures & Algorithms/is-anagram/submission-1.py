class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False 
        sd = {}
        td = {}
        for cs in s:
            sd[cs] = 1 if cs not in sd.keys() else sd[cs] + 1
        for ct in t:
            td[ct] = 1 if ct not in td.keys() else td[ct] + 1
        return sd == td
        
          

