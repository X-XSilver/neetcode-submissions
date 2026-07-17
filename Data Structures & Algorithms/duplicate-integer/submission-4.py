class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums_set = set()
        for i in nums:
            check_len = len(nums_set)
            nums_set.add(i)
            if check_len == len(nums_set):
                return True
        return False