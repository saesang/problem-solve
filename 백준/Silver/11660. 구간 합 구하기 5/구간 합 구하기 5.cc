#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
 * 구현? -> 시간초과ㅠ
 * : DP 사용!
 * : dp[i][j] = i행 j열까지의 합
 * : dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + board[i][j];
 */

int n, m;
int x, y, x2, y2;
int board[1025][1025];
int dp[1025][1025];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + board[i][j];
        }
    }


    while(m--) {
        cin >> x >> y >> x2 >> y2;

        int ans = dp[x2][y2] - dp[x2][y-1] - dp[x-1][y2] + dp[x-1][y-1];

        cout << ans << '\n';
    }
}