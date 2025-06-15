class Solution {
public:
    int mySqrt(int x) {
        
        int s = 0;
        int e = x;
        long long int m = s+(e-s)/2;
        int ans = -1;

        while(s<=e){

            long long int pro = m*m;

            if(pro == x){
                return m;
            }
            if(pro < x){
                ans = m;
                s = m+1;
            }
            if(pro > x){
                e = m-1;
            }

            m = s+(e-s)/2;
        }

        return ans;
    }
};