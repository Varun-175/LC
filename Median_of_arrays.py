class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l1 = list(nums1+nums2)
        sorted(l1)
        n = median(l1)
        return n