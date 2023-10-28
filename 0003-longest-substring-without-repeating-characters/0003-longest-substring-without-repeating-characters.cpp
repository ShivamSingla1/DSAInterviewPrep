class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1); // or unordered_map<char,int> mpp;

        int i=0, j=0;
        int len=0;
        while(j<s.size()){
            if(mpp[s[j]] != -1) i = max(mpp[s[j]]+1, i);
            mpp[s[j]] = j;
            len = max(len, j-i+1);
            j++;    
        }
        return len;
    }
};