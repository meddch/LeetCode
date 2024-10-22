class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 2;
        if (nums.size() < 2)
            return nums.size();
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] == nums[j - 2])
                continue ;
            else if (nums[i] != nums[j - 2])
            {
                nums[j] = nums[i];
                j++;
            }

        }
        return j;
    }
};