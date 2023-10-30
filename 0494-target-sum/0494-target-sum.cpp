class Solution {
public:
    int solve(int ind, int target, vector<int> &nums, vector<vector<int>> &dp){
        if(ind==-1 && target==0) return 1;
        else if(ind==-1) return 0;

        if(dp[ind][target+2001] != -1) return dp[ind][target+2001];

        int plus = solve(ind-1, target - nums[ind], nums, dp);
        int minus = solve(ind-1, target + nums[ind], nums, dp);        

        return dp[ind][target+2001] = plus + minus;      
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        vector<vector<int>> dp(n+1, vector<int>(10000, -1));
        return solve(n-1, target, nums, dp);
    }
};