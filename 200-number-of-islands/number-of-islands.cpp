class Solution {
private:
    void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis){
        queue<pair<int,int>> q;

        vis[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();
        int drow[4] = {-1, 1, 0, 0};
        int dcol[4] = {0, 0, -1, 1};

        q.push({i,j});
        
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            for(int k=0; k<4; k++) {
                int nrow = row + drow[k];
                int ncol = col + dcol[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                && !vis[nrow][ncol] && grid[nrow][ncol] == '1') 
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }

        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> vis(n, vector<int> (m,0));
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    bfs(i,j,grid,vis);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};