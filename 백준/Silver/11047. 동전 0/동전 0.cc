#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 가장 높은 동전부터 사용하여 k원 만들기
 */

int n,k;
int money[15];
int cnt;

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }

    int tmp = k;
    for (int i = n-1; i >= 0; i--) {
        if (money[i] > tmp) { continue; }
        if (tmp == 0) { break; }
        cnt += tmp/money[i];
        tmp = tmp%money[i];
    }

    cout << cnt;
}