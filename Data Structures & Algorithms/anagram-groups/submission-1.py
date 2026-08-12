class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        hm = {}
        for string in strs:
            v = [0] * 26
            for c in string:
                v [ord(c) - ord('a')] += 1
            t = tuple(v)
            if t not in hm:
                hm[t] = [string]
            else:
                hm[t].append(string)
        for strings in hm.values():
            result.append(strings)
        return result
