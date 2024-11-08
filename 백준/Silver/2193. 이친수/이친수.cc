#include<iostream>
#include<algorithm>

using namespace std;

int n;
long long dp[91];

/*
 * 범위 주의!!!!!!!!!!!!!!1
 * 1으로 시작하고, 연속된 1이 없는 n자리 숫자의 개수
 * dp[i]: i자리 이친수의 개수
 *
 * dp[1] = 1
 * dp[2] = 1
 * dp[3] = 2
 * dp[4] = 3
 * dp[5] = 5
 * dp[6] = 8
 *
 * dp[i] = dp[i-1] + dp[i-2] (i >= 3)
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n];
}