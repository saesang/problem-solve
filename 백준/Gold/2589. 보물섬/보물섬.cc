#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

/*
 * BFS 탐색
 * : 모든 L을 시작점으로 하는 BFS 반복 수행, 각 수행마다 mx = max(mx, dist)
 */

int n, m;
char board[51][51];
int dist[51][51];
int mx;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    // board 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            board[i][j] = c;
        }
    }

    // bfs 탐색
    queue<pair<int, int>> q;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (board[i][j] == 'L') {
                // 방문 전 dist = -1로 초기화
                for (int l = 0; l < n; l++) {
                    for (int k = 0; k < m; k++) {
                        dist[l][k] = -1;
                    }
                }

                q.push({i, j});
                dist[i][j] = 0;

                while(!q.empty()) {
                    pair<int, int> tmp = q.front(); q.pop();

                    for (int r = 0; r < 4; r++) {
                        int lx = tmp.first + dx[r];
                        int ly = tmp.second + dy[r];

                        if (lx >= 0 && lx < n && ly >= 0 && ly < m) {
                            if (dist[lx][ly] == -1 && board[lx][ly] == 'L') {
                                q.push({lx, ly});
                                dist[lx][ly] = dist[tmp.first][tmp.second] + 1;

                                mx = max(mx, dist[lx][ly]);
                            }
                        }
                    }
                }
            }
        }
    }

    cout << mx;
}