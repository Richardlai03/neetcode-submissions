class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        hm = {}
        for i, string in enumerate(strs):
            v = [0] * 26
            for c in string:
                v [ord(c) - ord('a')] += 1
            t = tuple(v)
            if t not in hm:
                hm[t] = [i]
            else:
                hm[t].append(i)
        for indices in hm.values():
            result.append([strs[s] for s in indices])
        return result
