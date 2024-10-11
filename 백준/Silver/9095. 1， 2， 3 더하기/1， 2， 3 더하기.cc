#include <iostream>
#include <algorithm>

using namespace std;

/*
 * d[i]: i를 1,2,3의 합으로 나타내는 방법의 수
 *
 * d[1] = 1
 * d[2] = 2
 * d[3] = 4
 * d[4] = 7
 * d[5] = 13
 *
 * => d[i] = d[i-1] + d[i-2] + d[i-3]
 */

int T;
int d[20];

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        d[1] = 1;
        d[2] = 2;
        d[3] = 4;
        for (int j = 4; j <= n; j++) {
            d[j] = d[j-1] + d[j-2] + d[j-3];
        }

        cout << d[n] << '\n';
    }
}