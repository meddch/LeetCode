class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        for (auto &it : op)
        {
            if (it == "+")
            {
                int tmp = st.top();
                st.pop();
                int tmp1 = st.top();
                st.push(tmp);
                st.push(tmp+tmp1);
            }
            else if (it == "D")
                st.push(st.top() * 2);
            else if (it == "C")
                st.pop();
            else
                st.push(stoi(it));
        }
        int res = 0;
        while(st.size())
        {
            res+= st.top();
            st.pop();
        }
        return res;
    }
};