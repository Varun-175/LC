class Solution:
    def moveZeroes(self, nums: List[int]) -> None:

        slow = 0
        n = len(nums)
        for fast in range(n):
            if nums[fast] != 0 and nums[slow] == 0:
                nums[slow], nums[fast] = nums[fast], nums[slow]

            if nums[slow] != 0:
                slow += 1