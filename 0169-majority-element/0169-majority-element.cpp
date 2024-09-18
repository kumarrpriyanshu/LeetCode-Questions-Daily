class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=n/2;
        int ans1;
        if(n==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end ());
            int freq=1,ans=nums[0];
            for(int i=1;i<nums.size();i++){
                if(nums[i]==nums[i-1]){
                    freq++;
                }
                else{
                    freq=1;
                    ans=nums[i];

                }
                if(freq>count){
                ans1= ans;
            }

            }
            
            
    
return ans1;
        
    }
};