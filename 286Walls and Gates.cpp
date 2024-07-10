// Further optimize
class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) 
    {
        if(rooms.size() == 0 || rooms[0].size() == 0) return;
        for(int i = 0; i < rooms.size(); i++)
            for(int j = 0; j < rooms[0].size(); j++)
                if(rooms[i][j] == 0) BFS(rooms, i, j, 0);
    }
    
    void BFS(vector<vector<int>>& rooms, int r, int c, int step)
    
    {
        if(r < 0 || c < 0 || r >= rooms.size() || c >= rooms[0].size() || rooms[r][c] < step) return;
        rooms[r][c] = step;
        BFS(rooms, r - 1, c, step + 1);
        BFS(rooms, r + 1, c, step + 1);
        BFS(rooms, r, c + 1, step + 1);
        BFS(rooms, r, c - 1, step + 1);
    }
};