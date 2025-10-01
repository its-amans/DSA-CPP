class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            if(mp.find(a)!=mp.end()){
                return true;
            }
            mp[a]=i;
        }
        return false;
    }
};