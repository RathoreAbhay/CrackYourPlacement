class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        if(strs.empty()){
            return "";
        }

        string firstStr = strs[0];
        int numStrings = strs.size();

        for (int i = 0; i < firstStr.size(); i++) {
            char ch = firstStr[i];
           for (int j = 1; j < numStrings; j++) {
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return firstStr.substr(0, i);
                } 
            }
        }
        return firstStr;
    }
};