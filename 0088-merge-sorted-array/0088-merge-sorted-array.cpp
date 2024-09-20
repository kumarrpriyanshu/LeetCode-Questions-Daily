class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size();
        while(i!=m){
            nums1.pop_back();
            i--;
        }
        
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        
        
        
        sort(nums1.begin(),nums1.end());
        
        
    }
};