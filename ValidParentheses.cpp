class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.size() == 1) {
            return false;
        }
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++) {
            char curr = s[i];
          if(!st.empty())
          {
              if (curr == ')' && st.top() == '(') {
                st.pop();
            } else if (curr == '}' && st.top() == '{') {
                st.pop();

            } else if (curr == ']' && st.top() == '[') {
                st.pop();
            } else {
                st.push(s[i]);
            }
          }else{
            st.push(s[i]);
          }
        }
        return st.empty();
    }
};