class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int maxFreq = 0;
        int maxFreqElement = 0;
        for (auto pair : m) {
            if (pair.second > maxFreq) {
                maxFreq = pair.second;
                maxFreqElement = pair.first;
            }
        }
        return maxFreqElement;
    }
};