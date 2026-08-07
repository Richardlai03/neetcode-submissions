class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 1: 
            return 0
        l = 0
        r = 1
        max_p = 0
        while r < len(prices):
            if prices[r] > prices[l]:
                max_p = max(prices[r] - prices[l], max_p)                
            else: 
                l = r 
            r += 1
        return max_p

            
