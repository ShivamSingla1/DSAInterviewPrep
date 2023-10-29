class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int prevDiff=arr[1] - arr[0];

        for(int i=2; i<arr.size(); i++){
            int diff = arr[i] - arr[i-1];
            if(i==1) continue;
            if(diff == prevDiff){
                prevDiff = diff;
            } 
            else return false;
        }

        return true;
    }
};