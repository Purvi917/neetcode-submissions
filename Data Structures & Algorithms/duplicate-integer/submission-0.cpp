class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0 ; i<n ; i++)
        {
            if(m[nums[i]]>0) return true;
            m[nums[i]]++;
        }
        return false;
    }
};