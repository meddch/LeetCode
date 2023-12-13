class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;
        for (auto w: strs)
        {
            string word = w;
            sort(word.begin(), word.end());
            map[word].push_back(w);
        }
        for (auto w: map)
            res.push_back(w.second);
    return res;
    }
};