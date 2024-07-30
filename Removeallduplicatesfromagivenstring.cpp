class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    set<char> seen;
        string result;
        
        for (int i = 0; i < str.size(); i++) {
            if (seen.find(str[i]) == seen.end()) {
                seen.insert(str[i]);
                result += str[i];
            }
        }
        
        return result;
}
};