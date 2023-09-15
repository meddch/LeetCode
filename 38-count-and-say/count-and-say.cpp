class Solution {
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        string str = countAndSay(n-1);
        string res;
        int count = 1;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != str[i+1])
            {
                res+=(char)(count+48);
                res+= str[i];
                count = 1;
            }
            else
                count++;
        }
        return res;
    }
};