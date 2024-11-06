#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n;
char board[102][102];
int vis[102][102];
int visRG[102][102];
int cnt, cntRG;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0,1, 0, -1};

/*
 * 구역의 개수 출력: BFS
 * 일반인 -> 그림 개수
 * 적록색약 -> RG는 같은 그림
 * q 2개로 동시 탐색
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> q, qRG;
    char cur, curRG;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!vis[i][j]) {
                cur = board[i][j];
                q.push({i, j});
                vis[i][j] = true;
                cnt++;
            }
            if (!visRG[i][j]) {
                curRG = board[i][j];
                qRG.push({i, j});
                visRG[i][j] = true;
                cntRG++;
            }

            while(!q.empty()) {
                pair<int, int> tmp = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = tmp.first + dx[k];
                    int ny = tmp.second + dy[k];

                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        if (!vis[nx][ny] && board[nx][ny] == cur) {
                            q.push({nx, ny});
                            vis[nx][ny] = true;
                        }
                    }
                }
            }

            while(!qRG.empty()) {
                pair<int, int> tmp = qRG.front(); qRG.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = tmp.first + dx[k];
                    int ny = tmp.second + dy[k];

                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        if (curRG == 'B') {
                            if (!visRG[nx][ny] && board[nx][ny] == curRG) {
                                qRG.push({nx, ny});
                                visRG[nx][ny] = true;
                            }
                        } else {
                            if (!visRG[nx][ny] && (board[nx][ny] == 'R' || board[nx][ny] == 'G')) {
                                qRG.push({nx, ny});
                                visRG[nx][ny] = true;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << cnt << ' ' << cntRG;
}