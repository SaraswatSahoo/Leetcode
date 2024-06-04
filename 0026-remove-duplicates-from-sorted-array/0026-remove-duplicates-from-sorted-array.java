class Solution {
    public int removeDuplicates(int[] nums) {
        int len = nums.length;
        int k=0; // number of distinct elements
        int t; // to swap
        for(int i=1;i<len;i++){
            if(nums[k]==nums[i]){
                continue;
            } else {
                k++;
                t=nums[i];
                nums[i]=nums[k];
                nums[k]=t;
            }
        }
        return k+1;
    }
}