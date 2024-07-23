#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 풀이 과정 1 -> 잘못됨
 * : n * n board를 탐색하며 탐색 가능 여부를 int vis[][]로 체크하고 퀸 위치를 pair<int, int> arr[]에 저장! -> 재귀, 백트래킹 사용
 * 1. void fun(int depth): board 탐색하며 vis[][] 체크 -> 방문한 위치 및 해당 위치 기준 상하좌우대각선의 모든 좌표 vis[][] = true로 표시, 방문한 위치는 arr[]에 저장, fun(depth + 1) 실행
 * 2. depth == N이면 cnt++하고 return
 */

/*
 * 풀이 과정 2 -> 나중에 다시 풀어보기! 이해 안됨..
 * : 퀸들이 같은 열, 좌->우 대각선, 우->좌 대각선에 존재하지 않도록 vis[]로 체크해서 백트래킹
 */

int n;
int vis1[35];
int vis2[35];
int vis3[35]; // 넉넉잡아 35
int cnt;

void fun(int depth) {
    if (depth == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (vis1[i] || vis2[i + depth] || vis3[depth - i + n - 1]) continue;
        vis1[i] = true;
        vis2[i + depth] = true;
        vis3[depth - i + n - 1] = true;

        fun(depth + 1);

        vis1[i] = false;
        vis2[i + depth] = false;
        vis3[depth - i + n - 1] = false;
    }
}

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n;
    fun(0);

    cout << cnt;
}