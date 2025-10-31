class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]]=1;
            }
        }

        for(auto &p: mp){
            if(p.second==2){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};