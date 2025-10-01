class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,bool> mp;
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=true;
        }

        for(int i=1;i<=n;i++){
            if(mp.find(i)== mp.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};