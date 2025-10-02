class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int cols = nums[0].size();
        int rows = nums.size();
        int startrow=0;
        int endrow=rows-1;
        int startcol=0;
        int endcol=cols-1;

        vector<int> ans;
        while(startrow<=endrow && startcol<=endcol){
            for(int i=startcol;i<=endcol;i++){
                ans.push_back(nums[startrow][i]);
            }
            startrow++;

            for(int i=startrow;i<=endrow;i++){
                ans.push_back(nums[i][endcol]);
            }
            endcol--;

            if(startrow<=endrow){
                for(int i=endcol;i>=startcol;i--){
                    ans.push_back(nums[endrow][i]);
                }
                endrow--;
            }
            if(startcol<=endcol){
                for(int i=endrow;i>=startrow;i--){
                    ans.push_back(nums[i][startcol]);
                }
                startcol++;
            }
        }   
        return ans;
    }
};