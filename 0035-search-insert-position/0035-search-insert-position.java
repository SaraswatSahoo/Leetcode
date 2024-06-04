class Solution {
    public int search(int[] nums, int target, int l, int h){
    
        if (l >= h) {
            return l; 
        }

        int mid = (l+h)/2;

        if(target==nums[mid]) return mid;
        else if(target < nums[mid]){
            return(search(nums,target,l,mid));
        }else if(target > nums[mid]){
            return(search(nums,target,mid+1,h));
        }
        return -1;
    }
    public int searchInsert(int[] nums, int target) {
        return search(nums,target,0,nums.length);
    }
}