class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j=k;j>=1;j--){
            int mini=nums[0];
            int flag=0;
            for(int i=1;i<nums.size();i++){
                if(mini>nums[i]){
                    mini=nums[i];
                    flag=i;
                }
            }
            nums[flag]*=multiplier;

        }
    return nums;    
    }
};