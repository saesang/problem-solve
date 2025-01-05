#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
 * DP 활용
 * : 위 스티커를 뗄 때 최대 점수 = max(이전 줄의 스티커가 떼어지지 않은 경우 + 위 스티커, 이전 줄의 아래 스티커가 떼어진 경우 + 위 스티커)
 * : 아래 스티커를 뗄 때 최대 점수 = max(이전 줄의 스티커가 떼어지지 않은 경우 + 아래 스티커, 이전 줄의 위 스티커가 떼어진 경우 + 아래 스티커)
 * : 현재 스티커를 떼지 않을 때 최대 점수 = max(이전 줄의 위 스티커가 떼어진 경우, 이전 줄의 아래 스티커가 떼어진 경우)
 * -> dp[0][i] = max(dp[2][i-1] + board[0][i], dp[1][i-1] + board[0][i])
 * -> dp[1][i] = max(dp[2][i-1] + board[1][i], dp[0][i-1] + board[1][i])
 * -> dp[2][i] = max(dp[1][i-1], dp[0][i-1]);
 */

int T, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> T;

    while (T--) {
        cin >> n;

        int board[2][100001];
        int dp[3][100001];
        int mx = 0;

        for (auto &i : board) {
            for (int j = 0; j < n; j++) {
                cin >> i[j];
            }
        }

        dp[0][0] = board[0][0];
        dp[1][0] = board[1][0];
        dp[2][0] = 0;

        for (int i = 1; i < n; i++) {
            dp[0][i] = max(dp[2][i-1] + board[0][i], dp[1][i-1] + board[0][i]);
            dp[1][i] = max(dp[2][i-1] + board[1][i], dp[0][i-1] + board[1][i]);
            dp[2][i] = max(dp[1][i-1], dp[0][i-1]);
        }

        mx = max({dp[0][n-1], dp[1][n-1], dp[2][n-1]});

        cout << mx << '\n';
    }
}