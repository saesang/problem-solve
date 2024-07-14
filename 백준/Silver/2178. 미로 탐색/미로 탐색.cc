#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

/* 풀이 순서
 *
 * bfs를 통해 미로찾기
 * (0,0)으로부터의 현재 위치까지의 거리 저장 배열 dist 생성
 * 현재 위치가 [n][m]일 때 dist 값 체크 후 출력
 */

#define X first
#define Y second

int n, m;
string board[102];
int dist[102][102];
int dx[] = {1, 0, -1, 0};
int dy[] = {0,1, 0, -1};

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    // dist 배열을 -1로 초기화 해서 방문 여부 파악
    for (int i = 0; i < n; ++i) {
        fill(dist[i], dist[i] + m, -1);
    }

    queue<pair<int, int>> q;
    q.emplace(0,0);
    dist[0][0] = 1;
    while (!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        for (int l = 0; l < 4; l++) {
            int nx = cur.X + dx[l];
            int ny = cur.Y + dy[l];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            q.emplace(nx,ny);
        }
    }

    cout << dist[n - 1][m - 1];
}