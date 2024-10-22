class Solution {
public:
    int majorityElement(vector<int>& nums) {
        size_t count = 1;
        int maj = nums[0];
        for (int i = 1 ;i < nums.size(); i++)
        {
            if (maj == nums[i])
                count++;
            if (maj != nums[i])
                count--;
            if (count == 0)
            {
                maj = nums[i];
                count = 1;
            }
        }
        return maj;
    }
};