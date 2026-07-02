class Solution {
public:
    vector<vector<int>> vc;

    void solve(vector<int>& nums, int target, int sum, int index, vector<int>& temp) {
        if (sum > target) return;

        if (sum == target) {
            vc.push_back(temp);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            solve(nums, target, sum + nums[i], i, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        solve(nums, target, 0, 0, temp);
        return vc;
    }
};