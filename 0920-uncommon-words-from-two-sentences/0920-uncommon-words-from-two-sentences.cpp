class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        string str=s1+" "+s2;
        unordered_map<string,int>mapping;
        stringstream ss(str);
        string word;
        while (ss >> word) {
        
        mapping[word]++;
    }
    for (const auto &pair : mapping) {
        if(pair.second==1){
            ans.push_back(pair.first);
        }
        
    }

     return ans;   
    }
};