class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0] = 1;
        int preSum = 0, count =0;
        for(int i = 0; i<nums.size();i++){
            preSum+=nums[i];
            int rem = preSum%k;
            if (rem < 0){
                rem+=k;
            }
            if (m.find(rem) != m.end()) {
                count += m[rem];
            }
            m[rem]++;  
        }
        return count;
    }
};