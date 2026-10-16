class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string ans = "";
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                ans += tolower(s[i]);
            }
            if(s[i]>='a' && s[i]<='z')
            {
                ans += s[i];
            }
            if(s[i]>='0' && s[i]<='9')
            {
                ans += s[i];
            }
        }
        string rev = ans;
        reverse(rev.begin(),rev.end());
        return rev==ans;
    }
};
