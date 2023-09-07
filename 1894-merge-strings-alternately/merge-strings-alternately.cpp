class Solution {
public:
    string mergeAlternately(string w1, string w2)
    {
        string s;

        int i = 0;
        while (i < w1.length() && i < w2.length())
        {
            s.push_back(w1[i]);
            s.push_back(w2[i]);
            i++;
        }
        while (i < w1.length())
            s.push_back(w1[i++]);
        while (i < w2.length())
            s.push_back(w2[i++]);
        return s;
    }
};