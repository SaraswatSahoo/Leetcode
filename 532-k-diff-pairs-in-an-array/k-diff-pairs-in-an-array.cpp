class Solution {
public:

    int bs(vector<int>& nums, int s, int e, int target){

        int m = s+(e-s)/2;
        while(s<=e){
            if(nums[m] == target){
                return m;
            }
            else if(nums[m] > target){
                e = m-1;
            }
            else {
                s = m+1;
            }
            m = s+(e-s)/2;
        }

        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;

        for(int i=0;i<nums.size();i++){
            if(bs(nums, i+1, nums.size()-1, nums[i]+k) != -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }

        return ans.size();
    }
};