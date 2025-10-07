class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int absdiff=INT_MAX;
        for(int i=1;i<n;i++){
            absdiff=min(absdiff,abs(arr[i]-arr[i-1]));
        }
        
        vector<vector<int>> ans;
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])==absdiff){
                ans.push_back({arr[i-1],arr[i]});
            }

        }
        return ans;
    }
};