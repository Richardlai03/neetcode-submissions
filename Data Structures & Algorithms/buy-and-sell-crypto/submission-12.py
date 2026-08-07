class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 1: 
            return 0
        l = 0
        r = 1
        max_p = 0
        curr_p = 0
        while r < len(prices):
            if prices[r] > prices[l]:
                curr_p = max(curr_p, prices[r] - prices[l])
                r += 1
            else: 
                l += 1
                r = l + 1
            max_p = max(curr_p, max_p)
        return max_p

            
