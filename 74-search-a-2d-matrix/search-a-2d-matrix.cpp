class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col;
        int s = 0;
        int e = n-1;
        int m = s+(e-s)/2;

        while(s<=e){

            int rI = m/col;
            int cI = m%col;

            if(matrix[rI][cI] == target){
                return true;
            }
            if(matrix[rI][cI] < target){
                s = m+1;
            } else {
                e = m-1;
            }

            m = s+(e-s)/2;
        }

        return false;
    }
};