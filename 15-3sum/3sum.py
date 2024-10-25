class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums[:] = sorted(nums)
        ans = []
        for i in range(len(nums) - 2):
            left = i + 1
            right = len(nums) - 1
            while left < right:
                if (nums[i] + nums[left] + nums[right]) == 0:
                    if ans.count([nums[i], nums[left], nums[right]]) == 0:
                        ans.append([nums[i], nums[left], nums[right]])
                    left+=1
                    right-=1
                elif (nums[i] + nums[left] + nums[right]) < 0:
                    left+=1
                else:
                    right-=1
        return ans