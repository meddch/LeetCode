class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int j =1;
        while(s[i] == ' ')
            i--,j++;
        while(i >= 0 && s[i] != ' ')
            i--;
        return s.length() - i -j;

    }
};