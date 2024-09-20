class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int start=0;
        vector<vector<int>>ans(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=start++;
            }
        }
        int i=0,j=0;
        for(auto ele:commands){
            if(ele=="RIGHT")  j++;
            else if(ele=="DOWN")  i++;
            if(ele=="LEFT")  j--;
            if(ele=="UP")  i--;

        }
        return ans[i][j];

        
    }
};