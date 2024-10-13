#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n,m;
int board[510][510];
int vis[510][510];
queue<pair<int, int>> q;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int cnt;
int mx;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 1 && vis[i][j] == 0) {
                q.push({i, j});
                vis[i][j] = 1;
                cnt++;

                int pic = 1;
                while(!q.empty()) {
                    pair<int, int> tmp = q.front(); q.pop();
                    for (int k = 0; k < 4; k++) {
                        int nx = tmp.first + dx[k];
                        int ny = tmp.second + dy[k];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                            if (board[nx][ny] == 1 && vis[nx][ny] == 0) {
                                q.push({nx, ny});
                                vis[nx][ny] = 1;
                                pic++;
                            }
                        }
                    }
                }

                mx = max(pic, mx);
            }
        }
    }

    cout << cnt << '\n' << mx;
}