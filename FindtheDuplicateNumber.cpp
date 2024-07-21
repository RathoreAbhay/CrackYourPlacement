class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        for (const auto& pair : umap) {
            if (pair.second >= 2) {
                return pair.first;
            }
        }
        return -1;
    }
};