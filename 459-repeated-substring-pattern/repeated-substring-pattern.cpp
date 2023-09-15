class Solution {
public:
    static bool repeatedSubstringPattern(string s)
    {
        string db_str = s + s;
        string sub = db_str.substr(1, db_str.size() - 2);
        return sub.find(s) != string::npos;
    }
};