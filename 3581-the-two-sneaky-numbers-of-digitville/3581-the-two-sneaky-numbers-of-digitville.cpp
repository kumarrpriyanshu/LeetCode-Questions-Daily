class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int freq=0;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    freq++;
                }
            }
            if(freq>1){
                ans.push_back(nums[i]);
            }
        }
      return ans;  
    }
};