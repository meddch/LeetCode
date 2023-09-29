class Solution:
    def arraySign(self, nums: List[int]) -> int:
        product = math.prod(nums)
        return 1 if product > 0 else -1 if product < 0 else 0