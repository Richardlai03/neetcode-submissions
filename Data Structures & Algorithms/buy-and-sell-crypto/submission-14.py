class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minBuy = prices[0]
        max_p = 0
        for price in prices:
            max_p = max(max_p, price - minBuy)
            minBuy = min(minBuy, price)
        return max_p