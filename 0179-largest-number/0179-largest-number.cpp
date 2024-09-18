class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        for(auto num : nums){
            ans.push_back(to_string(num));
        }
        sort(ans.begin(),ans.end(),[](const string &a, const string &b) {
            return a+b > b+a ;
        });
        if(ans[0]=="0"){
            return "0";
        }
        string str="";
        for(string striv: ans){
            str+=striv;
     
        }
        return str;
    }
};