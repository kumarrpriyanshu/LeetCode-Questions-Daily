class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int data=0;
        for(int i=0;i<nums.size();i++){
            data^=nums[i];
        }
       return data; 
    }
};