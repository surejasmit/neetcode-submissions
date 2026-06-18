class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int result = 0;

        while(left < right){
            int water = 0;
            if(heights[left] <= heights[right]){
                water = (right-left)*heights[left];
                left++;
            }
            else{
                water = (right-left)*heights[right];
                right--;
            }
            result = max(result,water);

        }
        return result;

    }
};
