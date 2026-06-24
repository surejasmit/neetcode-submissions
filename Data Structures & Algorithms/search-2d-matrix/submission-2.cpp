class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bottom =  matrix.size()-1;

        while(top <= bottom){

            int midrow = top + (bottom-top)/2;
            int left = 0;
            int right = matrix[0].size()-1;
            if(matrix[midrow][0] <= target && matrix[midrow][right] >= target)
            {
                while(left <= right){
                    int midcol = left + (right-left)/2;

                    if(matrix[midrow][midcol] == target){
                        return true;
                    }
                    else if(matrix[midrow][midcol] > target){
                        right = midcol - 1;
                    }
                    else {
                        left = midcol + 1;
                    }
                }
                return false;
            }
            else if(matrix[midrow][0]  > target){
                bottom = midrow - 1;
            }
            else{
                top = midrow + 1;
            }
        }
        return false;
    }
};


