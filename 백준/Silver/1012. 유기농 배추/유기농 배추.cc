#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

/*
 * 그림의 개수 구하기: BFS
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 0;
    
    cin >> t;
    while(t--) {
        int ans = 0;
        int m = 0; int n = 0; int k = 0;
        int board[51][51] = {0};
        int vis[51][51] = {0};
        
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++) {
            int c,r;
            cin >> c >> r;
            board[r][c] = 1;
        }

        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 1) {
                    q.push({i, j});
                    vis[i][j] = true;
                    ans++;

                    while(!q.empty()) {
                        pair<int, int> tmp = q.front(); q.pop();
                        for (int l = 0; l < 4; l++) {
                            int nx = tmp.first + dx[l];
                            int ny = tmp.second + dy[l];
                            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                                if (!vis[nx][ny] && board[nx][ny] == 1) {
                                    q.push({nx, ny});
                                    vis[nx][ny] = true;
                                }
                            }
                        }
                    }
                }
            }
        }

        cout << ans << '\n';
    }
}