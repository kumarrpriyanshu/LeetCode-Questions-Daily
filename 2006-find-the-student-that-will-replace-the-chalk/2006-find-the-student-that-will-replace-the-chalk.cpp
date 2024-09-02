class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long sum=0;
            for(int i =0;i<n;i++) {
                sum=sum+chalk[i];
            }
            int m = k% sum;
            int j=0;
             
             while(m > 0  && j<n){
                
                if(m<chalk[j]){
                    return j;
                }
                m-=chalk[j];
                j++;

             }

        
     return j;   
    }
};