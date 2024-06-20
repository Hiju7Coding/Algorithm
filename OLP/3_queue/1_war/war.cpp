#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
using namespace std;

const int MAX_N = 1003;
int n, m;
int grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
pair<int, int> parent[MAX_N][MAX_N];

// Hàm kiểm tra ô có nằm trong ma trận không
bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

// Thuật toán loang để tìm vùng an toàn
int floodFill(int x, int y) {
    if (!isValid(x, y) || visited[x][y] || grid[x][y] == 1) {
        return 0;
    }
    visited[x][y] = true;
    int area = 1;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    for (int i = 0; i < 4; ++i) {
        area += floodFill(x + dx[i], y + dy[i]);
    }
    return area;
}

// Thuật toán DFS để tìm đường thoát ra khỏi chiến trường
bool findExitPath(int startX, int startY) {
    stack<pair<int, int>> st;
    st.push({startX, startY});
    visited[startX][startY] = true;

    while (!st.empty()) {
        int x = st.top().first;
        int y = st.top().second;
        st.pop();

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        for (int i = 0; i < 4; ++i) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if (isValid(newX, newY) && !visited[newX][newY] && grid[newX][newY] == 0) {
                visited[newX][newY] = true;
                parent[newX][newY] = {x, y};
                st.push({newX, newY});
                if (newX == 0 || newX == n - 1 || newY == 0 || newY == m - 1) {
                    return true; // Tìm thấy đường thoát
                }
            }
        }
    }
    return false; // Không tìm thấy đường thoát
}

int main() {
    ifstream fin("WAR.inp");
    ofstream fout("WAR.out");

    fin >> n >> m;
    int i, j;
    fin >> i >> j;

    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            fin >> grid[x][y];
        }
    }

    int numSafeAreas = 0;
    int largestSafeArea = 0;
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            if (!visited[x][y] && grid[x][y] == 0) {
                int area = floodFill(x, y);
                numSafeAreas++;
                largestSafeArea = max(largestSafeArea, area);
            }
        }
    }

    fout << numSafeAreas << " " << largestSafeArea << " ";

    // Tìm đường thoát ra khỏi chiến trường
    if (findExitPath(i, j)) {
        vector<pair<int, int>> path;
        int exitX = -1, exitY = -1;
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                if (visited[x][y] && (x == 0 || x == n - 1 || y == 0 || y == m - 1)) {
                    exitX = x;
                    exitY = y;
                    break;
                }
            }
        }
        while (exitX != i || exitY != j) {
            path.push_back({exitX, exitY});
            pair<int, int> prev = parent[exitX]