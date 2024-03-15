class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
        for(int i =0 ; i < tokens.size(); i++)
        {
            if (tokens[i] != "*" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "+")
                stack.push(stoi(tokens[i]));
            else
            {
                int right = stack.top();
                stack.pop();
                int left = stack.top();
                stack.pop();
                switch(tokens[i][0])
                {
                    case '*':
                        stack.push(left * right);
                        break;
                    case '+':
                        stack.push(left + right);
                        break;
                    case '-':
                        stack.push(left - right);
                        break;
                    case '/':
                        stack.push(left / right);
                        break;
                }
            }
        }
        return stack.top();
    }
};