class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        int ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1){
                ans= nums[i];
            }
        }
        return ans;
    }
};