class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> set(nums.begin(), nums.end());
        return set.size() != nums.size();
    }
};