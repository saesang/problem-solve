#include <iostream>
#include <algorithm>

using namespace std;

/*
 * d[i][0] = 직전 계단 안 밟고 i번째 계단을 밟았을 때 점수 최댓값
 * d[i][1] = 직전 계단 밟고 i번째 계단을 밟았을 때 점수 최댓값
 *
 * d[i][0] = max(d[i-2][0], d[i-2][1]) + stair[i]
 * d[i][1] = d[i-1][0] + stair[i]
 * d[i] = max(d[i][0], d[i][1])
 */

int n;
int d[310][2];
int stair[310];

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> stair[i];
    }

    d[1][0] = stair[1];
    d[1][1] = stair[1];
    d[2][0] = stair[2];
    d[2][1] = d[1][0] + stair[2];
    for (int i = 3; i <= n; i++) {
        d[i][0] = max(d[i-2][0], d[i-2][1]) + stair[i];
        d[i][1] = d[i-1][0] + stair[i];
    }

    cout << max(d[n][0], d[n][1]);
}