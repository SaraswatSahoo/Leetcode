class Solution {
    public int removeElement(int[] nums, int val) {
        int len = nums.length;
        int k=0;
        for(int i=0;i<len;i++){
            if(val!=nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
}