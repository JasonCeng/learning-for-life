class Solution {//BFS with clever offsets[] = {0, 1, 0, -1, 0}
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) {
            return 0;
        }
        int m = grid.size(), n = grid[0].size(), islands = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1') {
                    islands++;
                    BFS(grid, i, j, m, n);
                }
            }
        }
        return islands;
    }
private:
    void BFS(vector<vector<char>>& grid, int x, int y, int m, int n) {
        int offsets[] = {0, 1, 0, -1, 0};
        grid[x][y] = '0';
        queue<pair<int, int>> q;
        q.push({x, y});
        while(!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            for(int k = 0; k < 4; k++) {
                int r = p.first + offsets[k], c = p.second + offsets[k + 1];
                if(r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1') {
                    grid[r][c] = '0';
                    q.push({r, c});
                }
            }
        }
    }
};