class Solution {
public:
     void solve(vector<int> &nums, vector<vector<int>>& ans, int index){
        // base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        unordered_set<int> s;
        for(int i = index; i<nums.size(); i++){
            //if(i>index && nums[i]==nums[i-1]) continue;
            if(s.find(nums[i]) != s.end()) continue;
            s.insert(nums[i]);
            swap(nums[index], nums[i]);
            solve(nums, ans, index+1);
            // backtrack
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};