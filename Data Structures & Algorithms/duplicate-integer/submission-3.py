class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if len(nums) == 0:
            return False
        nums_set = set()
        for i in nums:
            check_len = len(nums_set)
            nums_set.add(i)
            if check_len == len(nums_set):
                return True
        return False