class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int absdiff=INT_MAX;
        for(int i=0;i<n-1;i++){
            absdiff=min(absdiff,abs(arr[i+1]-arr[i]));
        }
        
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i+1]-arr[i])==absdiff){
                vector<int> nw={arr[i+1],arr[i]};
                sort(nw.begin(),nw.end());
                ans.push_back(nw);
            }

        }
        return ans;
    }
};