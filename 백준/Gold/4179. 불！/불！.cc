#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

/* 풀이 과정
 *
 * 1. 지훈이 이동 시간 dist1, 불 이동 시간 dist2 초기화 -> -1은 탐색 전
 * 2. 지훈이 좌표 저장 q1, 불 좌표 저장 q2 정의
 * 3. q2 기준 while 문 돌려서 bfs 돌린 후 q1 기준 while 문 돌려서 비교 -> dist1, 2 비교해서 지훈이 이동 위치 정하기
 * 4. q1.empty인데 지훈이가 가장자리가 아니면 탈출 실패
 * 5. dist max 출력
 * */

#define X first
#define Y second

int r, c;
char board[1002][1002];
int dist1[1002][1002];
int dist2[1002][1002];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int mx;

int main() {
    ios::sync_with_stdio;
    cin.tie(); cout.tie();

    queue<pair<int, int>> q1;
    queue<pair<int, int>> q2;

    cin >> r >> c;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'J') q1.emplace(i,j);
            if (board[i][j] == 'F') q2.emplace(i,j);
            if (board[i][j] == '.') {
                dist1[i][j] = -1;
                dist2[i][j] = -1;
            }
        }
    }

    // 불 이동
    while (!q2.empty()) {
        auto cur = q2.front(); q2.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (dist2[nx][ny] != -1) continue;
            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
            q2.emplace(nx,ny);
        }
    }

    // 지훈이 이동
    while (!q1.empty()) {
        auto cur = q1.front(); q1.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
                cout << dist1[cur.X][cur.Y] + 1;
                return 0;
            }
            if (dist1[nx][ny] != -1) continue;
            if (dist2[nx][ny] != -1 && dist2[nx][ny] <= dist1[cur.X][cur.Y] + 1) continue;  // 지훈이가 이동할 시간보다 먼저 불이 불어있는 상황이면 continue
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            q1.emplace(nx,ny);
        }
    }

    cout << "IMPOSSIBLE";
}