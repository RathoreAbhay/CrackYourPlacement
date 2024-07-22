class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (map.find(diff) != map.end()) {
                v.push_back(map[diff]);
                v.push_back(i);
                return v;
            }
            map[nums[i]] = i;
        }
        return v;
    }
};