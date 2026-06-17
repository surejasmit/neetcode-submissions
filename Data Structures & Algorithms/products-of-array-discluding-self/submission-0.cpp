class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int>result(len,1);

        for(int i = 0;i<nums.size();i++){
            if(i-1 >= 0){
                result[i] =  result[i-1]*nums[i-1];
            }
            else{
                result[i] = 1;
            }
        }
         int suffix = 1;

        for(int j = len - 1; j >= 0; j--){
            result[j] *= suffix;
            suffix *= nums[j];
        }
        return result;
    }
};
