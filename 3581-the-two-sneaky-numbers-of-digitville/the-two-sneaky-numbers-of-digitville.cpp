class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for (int num : nums)
            mp[num]++;

        for (auto &p : mp)
            if (p.second == 2)
                ans.push_back(p.first);

        return ans;
    }
};
