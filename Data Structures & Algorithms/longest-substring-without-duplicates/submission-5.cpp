class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        int left = 0;
        vector<int> lastseen(128,-1);
        for(int right=0 ; right<n ; right++)
        {
            char ch = s[right];
            if(lastseen[ch]>=left)
            {
                left = lastseen[ch] + 1;
            }
            lastseen[ch] = right;
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};
