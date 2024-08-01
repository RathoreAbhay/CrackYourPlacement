class Solution {
public:
    void sortColors(vector<int>& nums) {
        int prev = 0;
        for (int curr = 0; curr< nums.size(); curr++) {
            if(nums[curr]==0){
                swap(nums[curr],nums[prev]);
                prev++;
            }
        }
        for(int curr =prev;curr<nums.size();curr++){
            if(nums[curr]==1){
                swap(nums[curr],nums[prev]);
                prev++;
            }
        }
    }
};