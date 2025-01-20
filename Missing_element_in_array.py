class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        j=0
        nums = sorted(nums)
        for i in nums:
            if (i == j):
                j += 1
            else:
                return j
        return j