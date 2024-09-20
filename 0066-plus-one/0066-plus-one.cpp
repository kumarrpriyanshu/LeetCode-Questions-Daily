class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            if(digits[i]+1!=10){
                digits[i]+=1;
                return digits;
            }
            else{
                digits[i]=0;
                if(i==0){
                    digits.insert(digits.begin(),1);
                    return digits;

                }
            }
                
            
        
        }
        return digits;
    }
};