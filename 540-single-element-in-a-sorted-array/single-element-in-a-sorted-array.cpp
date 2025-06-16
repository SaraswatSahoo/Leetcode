class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int s = 0;
        int e = nums.size()-1;
        int m = s+(e-s)/2;

        while(s<=e){

            if(s==e){
                return nums[s];
            }

            int currVal = nums[m];

            int leftVal = -1;
            if(m-1 >= 0){
                leftVal = nums[m-1];
            }

            int rightVal = -1;
            if(m+1 < nums.size()){
                rightVal = nums[m+1];
            }

            if(currVal != leftVal && currVal != rightVal)
            {
                return currVal;
            }

            if(currVal == leftVal && currVal != rightVal){
                int pairStartIndex = m-1;
                if(pairStartIndex & 1){
                    e = m-1;
                } else {
                    s = m+1;
                }
            } 
            
            else if(currVal != leftVal && currVal == rightVal){
                int pairStartIndex = m;
                if(pairStartIndex & 1){
                    e = m-1;
                } else {
                    s = m+1;
                }
            }

            m = s+(e-s)/2;
        }

        return -1;
    }
};