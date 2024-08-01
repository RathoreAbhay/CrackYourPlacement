class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        unordered_map<string, int> roman = {
            {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100},
            {"XC", 90},  {"L", 50},   {"XL", 40}, {"X", 10},   {"IX", 9},
            {"V", 5},    {"IV", 4},   {"I", 1}};

        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && roman[s.substr(i, 2)]) {
                num += roman[s.substr(i, 2)];
                i++;
            } else {
                num += roman[s.substr(i, 1)];
            }
        }
        return num;
    }
};