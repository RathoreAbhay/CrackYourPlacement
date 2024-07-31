class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int j=i,count=0;
            while(j>0){
                if(j%2==1){
                    count++;
                }
                j=j/2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};