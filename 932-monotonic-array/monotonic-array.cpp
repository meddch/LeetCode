class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() < 3)
            return true;
        int j = 0;
        while(j + 1 < nums.size() && nums[j] == nums[j+1])
            j++;
        if (j + 1 == nums.size())
            return true;
        bool op = nums[j+1] - nums[j] > 0 ? true : false;
        for (int i = 1; i < nums.size(); i++)
            if ((op && (nums[i] < nums[i-1])) || (!op && nums[i] > nums[i-1]))
                return false;
        return true;
    }
};