class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int m = s+(e-s)/2;

        while(s<e){
            if(arr[m] < arr[m+1])
            s = m+1;
            else
            e=m;
            m = s+(e-s)/2;
        }

        return m;
    }
};