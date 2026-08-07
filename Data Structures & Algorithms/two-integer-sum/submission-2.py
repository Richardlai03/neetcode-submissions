class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_dict = {}
        for i, n in enumerate(nums):
            if target - n in my_dict.keys():
                return [my_dict[target-n], i]
            else:
                my_dict[n] = i


