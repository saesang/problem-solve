#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 풀이 과정
 * : 백트래킹 -> 수열의 합 기준으로 합 >= s이면 return
 */

int n, s;
int nums[21];
int cnt;

void fun(int cur, int curSum) {
    if (cur == n) { // 수열 전체 탐색 후
        if (curSum == s) cnt++;
        return;
    }

    fun(cur + 1, curSum);   // nums[cur]를 더하지 않는 경우 수열의 합
    fun(cur + 1, curSum + nums[cur]);   // nums[cur]를 더하는 경우 수열의 합
}

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    fun(0, 0);
    if (s == 0) cnt--;  // 합이 0인 경우 공집합도 포함되므로 전체 cnt에서 -1을 해준다.

    cout << cnt;
}

