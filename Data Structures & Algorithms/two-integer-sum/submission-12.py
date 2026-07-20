class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        dict_nums = {}

        
        for i in range(len(nums)):
            complement = target - nums[i]

            if complement in dict_nums:
                return [dict_nums[complement], i]
            else:
                dict_nums.update({nums[i]: i})
            #print( dict_nums)
        
        return []