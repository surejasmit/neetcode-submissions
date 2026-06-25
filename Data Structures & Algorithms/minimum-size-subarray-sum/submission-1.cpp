class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sumele = 0;
        int result = INT_MAX;
        for(int i = 0;i<nums.size();i++){

            sumele += nums[i];

            while(left <= i && sumele >= target){
                result = min(result,i-left+1);
                sumele -= nums[left];
                left++;
            }
        
        }
        
        return (result == INT_MAX)?0:result;
    }
};