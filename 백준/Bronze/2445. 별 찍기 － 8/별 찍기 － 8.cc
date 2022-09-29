#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < i + 1; ++j) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (N - i - 1); ++j) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < 2 * N; i++) {
        cout << "*";
    }
    cout << "\n";
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (N - i); ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
