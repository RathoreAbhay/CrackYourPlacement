class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int prev = 0;
        if(nums.size()==0){
            return;
        }
        for(int curr = 0;curr<nums.size();curr++){
            if(nums[curr]!=0){
                swap(nums[prev], nums[curr]);
                prev++;
            }
        }
    }
};