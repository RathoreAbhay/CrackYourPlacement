class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> umap;
        string ans;
        for (int i = 0; i < arr.size(); i++) {
            umap[arr[i]]++;
        }
        for (auto i : arr) {
            if (umap[i] == 1) {
                k--;
                if (k == 0) {
                    ans = i;
                }
            }
        }
        return ans;
    }
};