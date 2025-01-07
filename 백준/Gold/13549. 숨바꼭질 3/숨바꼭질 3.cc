#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, k;
int minTime[100001];  // 0 ~ 100000까지의 위치에서의 최단 시간

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    // minTime 배열을 -1로 초기화 (방문하지 않은 상태)
    fill(minTime, minTime + 100001, -1);

    // 큐 초기화
    queue<int> q;
    q.push(n);
    minTime[n] = 0;  // 시작 위치의 시간은 0초

    while (!q.empty()) {
        int tmp = q.front(); q.pop();

        // 이동 가능한 위치들
        int minus = tmp - 1;
        int plus = tmp + 1;
        int dble = tmp * 2;

        // *2로 이동
        if (dble <= 100000 && minTime[dble] == -1) {
            minTime[dble] = minTime[tmp];
            q.push(dble);
        }

        // -1로 이동
        if (minus >= 0 && minTime[minus] == -1) {
            minTime[minus] = minTime[tmp] + 1;
            q.push(minus);
        }

        // +1로 이동
        if (plus <= 100000 && minTime[plus] == -1) {
            minTime[plus] = minTime[tmp] + 1;
            q.push(plus);
        }
    }

    cout << minTime[k];
}