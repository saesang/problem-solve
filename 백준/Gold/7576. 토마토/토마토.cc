#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

#define X first
#define Y second

/* 풀이 과정
 *
 * 1. dist[][] 0으로 초기화
 * 2. board[][] = 1인 애들 좌표 다 q.push, board[][] = 0인 애들 dist[][] = 0
 * 3. q에서 1인 애들 pop 하면서 bfs로 근접 애들 dist[][]++, q.push -> 이 과정 반복
 * 4. q.empty일 때, dist 완전 탐색으로 dist[][] = -1 남아있는지 체크!
 */

int n,m;
int board[1002][1002];
int dist[1002][1002];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int mx;

int main() {
    ios::sync_with_stdio;
    cin.tie(); cout.tie();

    cin >> m >> n;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 1) q.emplace(i,j);
            if (board[i][j] == 0) dist[i][j] = -1;  // dist 초기화 -> 토마토 없는 좌표 dist도 0으로 처리!
        }
    }

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] != -1) continue;
            q.emplace(nx, ny);
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            mx = max(mx, dist[nx][ny]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (dist[i][j] == -1) {
                cout << -1;
                return 0;
            }
        }
    }

    cout << mx;
}