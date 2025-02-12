#include <bits/stdc++.h>
using namespace std;

int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool isValidPos(int x, int y, int size, const vector<vector<char>>& grid) {
    return x >= 0 && x < size && y >= 0 && y < size && grid[x][y] != 'M';
}

int calculateMinCost(int size, const vector<vector<char>>& grid, pair<int, int> start, pair<int, int> end) {
    vector<vector<int>> cost(size, vector<int>(size, INT_MAX)); 
    queue<pair<int, int>> q;

    q.push(start);
    cost[start.first][start.second] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        int dir = 0;
        while (dir < 4) {
            int nx = x + dirs[dir][0];
            int ny = y + dirs[dir][1];

            if (isValidPos(nx, ny, size, grid)) {
                int moveCost = (grid[x][y] == 'T' && grid[nx][ny] == 'T') ? 0 : 1; 
                if (cost[x][y] + moveCost < cost[nx][ny]) {
                    cost[nx][ny] = cost[x][y] + moveCost;
                    q.push({nx, ny});
                }
            }
            dir++;
        }
    }

    return cost[end.first][end.second];
}

int main() {
    int size;
    cin >> size;

    vector<vector<char>> grid(size, vector<char>(size));
    pair<int, int> start, end;

    int i = 0;
    while (i < size) {
        int j = 0;
        while (j < size) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') start = {i, j};
            if (grid[i][j] == 'E') end = {i, j};
            j++;
        }
        i++;
    }

    int result = calculateMinCost(size, grid, start, end);
    cout << result;  
    return 0;
}
