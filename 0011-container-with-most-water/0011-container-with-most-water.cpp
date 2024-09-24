class Solution {
public:
    int maxArea(vector<int>& height) {
       int n= height.size();
       int area=0;
        int i=0,j=n-1;
        
        while(i<=j){
            int len= j-i;
            int bredth= min(height[j ],height[i]);
            int currarea= len * bredth;
            area= max(currarea,area);
            height[i]<=height[j]? i++: j--;

            
        }
        return area;
    }
};