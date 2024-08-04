class Solution {
public:
    int calculate(string s) {
        stack<int> stack;
        int currNum = 0;
        char operation = '+';
        
        for (int i = 0; i < s.size(); i++) {
            char currChar = s[i];
            if (isdigit(currChar)) {
                currNum = (currNum * 10) + (currChar - '0');
            }
            if (!isdigit(currChar) && !iswspace(currChar) || i == s.size() - 1) {
                if (operation == '-') {
                    stack.push(-currNum);
                } else if (operation == '+') {
                    stack.push(currNum);
                } else if (operation == '*') {
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop * currNum);
                } else if (operation == '/') {
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop / currNum);
                }
                operation = currChar;
                currNum = 0;
            }
        }
        int ans = 0;
        while (!stack.empty()) {
            ans += stack.top();
            stack.pop();
        }
        return ans;
    }
};