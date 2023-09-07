class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int find;
        if ((find = haystack.find(needle)) != haystack.npos)
            return find;
        return -1;
    }
};