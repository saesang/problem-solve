#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

/*
 * 풀이 과정
 *
 * : x-1, x+1, x*2를 담을 q 정의 후 bfs 돌리면서 결과 dist에 저장
 *  dist[K]값 출력
 *
 * 1. dist -1로 초기화: dist는 각 좌표까지의 최소 이동 시간
 * 2. K에 도달할 때 까지 q에 대한 bfs 돌리기
 * 3. dist[K] 출력
 */

int n,k;
int dist[100001];

int main() {
    ios::sync_with_stdio;
    cin.tie(); cout.tie();

    queue<int> q;

    cin >> n >> k;
    for (int i = 0; i < 100001; ++i) {
        dist[i] = -1;
        if (i == n) {
            q.push(i);
            dist[i] = 0;
        }
    }

    if (n == k) {
        cout << 0;
        return 0;
    }

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        int xList[] = {cur + 1, cur - 1, cur * 2};

        for (int x : xList) {
            if (x < 0 || x > 100000) continue;
            if (x == k) {
                cout << dist[cur] + 1;
                return 0;
            }
            if (dist[x] != -1) continue;
            dist[x] = dist[cur] + 1;
            q.push(x);
        }
    }
}