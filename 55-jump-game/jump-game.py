class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        step = 0
        for x in nums:
            if step < 0:
                return False
            if step < x:
                step = x
            step -= 1
        return True



