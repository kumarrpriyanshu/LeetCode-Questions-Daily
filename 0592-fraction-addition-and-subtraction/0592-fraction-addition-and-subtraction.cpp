class Solution {
public:
    string fractionAddition(string exp) {
        int num=0;
        int den=1;
        int i=0;
        int n=exp.length();
        while(i<n){
            int currnum=0;
            int currden=0;
            bool isneg=false;

            if(exp[i]=='+'|| exp[i]=='-'){
                if(exp[i]=='-'){
                    isneg=true;
                }
                i++;
            }
            while(i<n && isdigit(exp[i])){
                int val=exp[i]-'0';
                currnum=(currnum*10)+ val;
                i++;
            }
            i++;
            if(isneg==true){
                currnum*=-1;
            }
            while(i<n && isdigit(exp[i])){
                int val=exp[i]-'0';
                currden=(currden*10)+ val;
                i++;
            }
            num=num*currden + currnum*den;
            den=den*currden;
        }
        int gc= (gcd(abs(num),den));
        num/=gc;
        den/=gc;
        return to_string(num)+"/"+to_string(den);
        
    }
};