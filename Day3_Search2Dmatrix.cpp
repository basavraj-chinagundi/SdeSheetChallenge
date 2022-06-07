class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int row=0;
        int col=cols-1;
        while(row<rows and col>-1){
            if(target>matrix[row][col]){
                row++;
            }
            else if(target<matrix[row][col]){
                col--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
