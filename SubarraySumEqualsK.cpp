class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int preSum = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            int temp = preSum - k;
            if (m.find(temp) != m.end()) {
                count += m[temp];
            }
            m[preSum]++;
        }
        return count;
    }
};