class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int more=target-a;

            if(map.find(more)!=map.end()){
                return {map[more],i};
            }
            map[a]=i;
        }
        return {};
      }
};