#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 점화식 찾기 -> 임의의 수를 정해서 앞뒤로 연관관계를 생각해보자
 * d[i]: i를 1로 만드는 최소 횟수
 *
 * d[i] = min(d[i/3]+1, d[i/2]+1, d[i-1]+1)
*/

int n;
int d[1000001];

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n;

    d[1] = 0;
    for (int i = 2; i <= n; i++) {
        d[i] = d[i-1]+1;
        if (i % 3 == 0) {
            d[i] = min(d[i/3]+1, d[i]);
        }
        if (i % 2 == 0) {
            d[i] = min(d[i/2]+1, d[i]);
        }
    }

    cout << d[n];
}