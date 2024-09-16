class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>ans;
        for(int i=0;i<timePoints.size();i++){
            string a=timePoints[i];
            int hr=stoi(a.substr(0,2));
            int min=stoi(a.substr(3,2));
            int total=hr*60+min;
            ans.push_back(total);

        }
        sort(ans.begin(),ans.end());
        int mini=INT_MAX;
        for(int i=1;i<ans.size();i++){
            int minimum=ans[i]-ans[i-1];
            mini=min(mini,minimum);
        }
        cout<<mini;
        int n=ans.size();
        int diff=(ans[0]+1440-ans[n-1]);
        mini=min(mini,diff);




        return mini;
        
    }
};