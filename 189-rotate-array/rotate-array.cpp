class Solution {
public:

    void reverse(vector<int>& nums, int s, int e){

        while(s<e){
            swap(nums[s],nums[e]);
            s++; e--;
        }

    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n; // 10%7 = 3 ---> same as rotating by 3 elements

        //1. reverse all elements
        int s = 0;
        int e = n-1;
        reverse(nums, s, e);
        
        //2. reverse first k elements
        s = 0;
        e = k-1;
        reverse(nums, s, e);

        //3.reverse last n-k elements
        s = k;
        e = n-1;
        reverse(nums, s, e);

    }
};