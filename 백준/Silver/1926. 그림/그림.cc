#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

/* 풀이 순서
 *
 * bfs를 통해 현재 그림의 넓이를 확인
 * cnt +1
 * 현재 그림의 넓이를 mx와 비교해서 mx보다 큰 경우에 mx 갱신
 * 다음 그림 탐색
 */

/* 다른 그림 탐색 로직 -> 이중 for문으로 처리
 *
 */

#define X first // 세미콜론 없애기!
#define Y second

int board[502][502];
bool vis[502][502]; // 전역변수로 선언 시 기본적으로 false로 초기화 됨 -> 따로 초기화 필요 x
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int num = 0; // 그림의 개수
int mx = 0; // 최대 그림의 넓이

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j] || board[i][j] == 0) continue;
            queue<pair<int, int>> q;
            q.emplace(i,j);
            num++;
            vis[i][j] = true;
            int sz = 1; // 시작 지점도 넓이에 포함이므로
            while (!q.empty()) {
                pair<int, int> cur = q.front(); q.pop();
                for (int l = 0; l < 4; l++) {
                    int nx = cur.X + dx[l];
                    int ny = cur.Y + dy[l];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (vis[nx][ny] || board[nx][ny] != 1) continue;
                    q.emplace(nx,ny);
                    sz++;
                    vis[nx][ny] = true;
                }
            }
            mx = max(sz, mx);
        }
    }

    cout << num << '\n' << mx;
}