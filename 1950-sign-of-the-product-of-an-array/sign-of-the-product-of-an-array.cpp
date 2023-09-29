class Solution {
public:
    int arraySign(vector<int>& nums)
    {
        if (find(nums.begin(),nums.end(),0) != nums.end())
            return 0;
        short res = 1;
        for(int i = 0; i < nums.size() ;i++)
            res*=(nums[i] > 0 ? 1 : -1);
        return res;
    }
};