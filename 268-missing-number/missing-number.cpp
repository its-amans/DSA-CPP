class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,bool> mp;
        
        int n=nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]]=true;
        }
        for(int i=0;i<=n;i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }
        return -1;
    }
};