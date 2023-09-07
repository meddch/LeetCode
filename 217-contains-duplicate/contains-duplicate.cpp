class Solution {
public:
    bool containsDuplicate(vector<int>& vec)
    {
        std::set<int> set(vec.begin(), vec.end());
        return (set.size() != vec.size());
    }
};