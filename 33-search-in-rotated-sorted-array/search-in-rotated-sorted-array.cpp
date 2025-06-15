class Solution {
public:

    int pivotIndex(vector<int>& nums){

        int n = nums.size();
        int s = 0;
        int e = n-1;
        int m;

        while(s <= e){

            m = s+(e-s)/2;

            if(s == e){
                return s;
            }

            if(m+1 < n && nums[m] > nums[m+1]){
                return m;
            }

            if(m-1 >= 0 && nums[m-1] > nums[m]){
                return m-1;
            }

            if(nums[s] > nums[m]){
                e = m-1;
            } else {
                s = m+1;
            }

        }

        return -1;
    }

    int binarySearch(vector<int>& nums, int target, int s, int e){

        while(s <= e){

            int m = s+(e-s)/2;
            if(nums[m] == target){
                return m;
            }
            if(nums[m] > target){
                e = m-1;
            }
            if(nums[m] < target){
                s = m+1;
            }

        }

        return -1;
        
    }

    int search(vector<int>& nums, int target) {
        
        int pivot = pivotIndex(nums);
        int n = nums.size();

        if(target >= nums[0] && target <= nums[pivot])
        {
            int ans = binarySearch(nums,target,0,pivot);
            return ans;
        } else {
            int ans = binarySearch(nums,target,pivot+1,n-1);
            return ans;
        }

    }
};