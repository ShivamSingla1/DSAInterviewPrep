class Solution {
public:
    void solve(int ind,vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans){
        ans.push_back(ds);
        for(int i = ind; i<nums.size(); i++){
            if(i!=ind && nums[i] == nums[i-1]) continue;  // 29:00 to 29:20
            ds.push_back(nums[i]);
            solve(i+1, nums, ds, ans);
            ds.pop_back();
        }    
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(nums.begin(), nums.end()); // so that duplicates are together
        solve(0, nums, ds, ans);
        return ans;
    }
};