class Solution {
private:
    void dfs_traversal(int node,vector<vector<int>>& isConnected,vector<int>& vis){
        
        vis[node]=1;
        
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i]==1 && !vis[i]){
                dfs_traversal(i,isConnected,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V=isConnected.size();
        vector<int> vis(V,0);
        int ans=0;
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs_traversal(i,isConnected,vis);
            ans++;
            }
        }
        return ans;
    }
};