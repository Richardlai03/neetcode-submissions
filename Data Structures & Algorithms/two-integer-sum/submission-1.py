class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        my_dict = {}
        for i, n in enumerate(nums):
            if target - n in my_dict.keys():
                result.append(my_dict[target - n])
                result.append(i)
            else:
                my_dict[n] = i

        return result

