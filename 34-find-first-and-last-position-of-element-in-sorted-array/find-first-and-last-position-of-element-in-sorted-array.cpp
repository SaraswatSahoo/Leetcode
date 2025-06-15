class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int m = s+(e-s)/2;
        pair<int,int> p = make_pair(-1,-1);

        while(s<=e){
            if(nums[m] == target){
                p.first = m;
                e = m-1;
            }
            if(nums[m]>target){
                e = m-1;
            }
            if(nums[m]<target){
                s = m+1;
            }
            m = s+(e-s)/2;
        }

        s = 0; e = n-1; m = s+(e-s)/2;

        while(s<=e){
            if(nums[m] == target){
                p.second = m;
                s = m+1;
            }
            if(nums[m]>target){
                e = m-1;
            }
            if(nums[m]<target){
                s = m+1;
            }
            m = s+(e-s)/2;
        }

        vector<int> ans;
        ans.push_back(p.first);
        ans.push_back(p.second);

        return ans;
        
    }
};