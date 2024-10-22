class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 2;
        int s = nums.size();
        if (s < 2)
            return s;
        for (int i = 2; i < s; i++)
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