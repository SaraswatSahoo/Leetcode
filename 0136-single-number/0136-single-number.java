class Solution {
    public int singleNumber(int[] nums) {
        int n = nums.length;
        int c = 0;
        for(int i=0;i<n;i++){
            c=c^nums[i];
        }
        return c;
    }
}