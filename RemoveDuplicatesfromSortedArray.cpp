class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev =0;
        if(nums.size()==0){
            return 0;
        }
        for(int curr=1;curr<nums.size();curr++){
            if(nums[curr] != nums[prev]){
                prev++;
                nums[prev]=nums[curr];
            }
        }
        return prev+1;
    }
};