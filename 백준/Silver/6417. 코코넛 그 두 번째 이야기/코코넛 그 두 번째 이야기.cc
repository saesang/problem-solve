#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

bool divideCoconut(int n, int k) {
    for (int i = 0; i < k; ++i) {
        if ((n - 1) % k == 0) {
            n = n - 1 - ((n - 1) / k);
        } else return false;
    }
    return true;
}

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    while (1) {
        cin >> N;
        if (N == -1) break;

        for (int i = N; i > 1; --i) {
            bool isK = divideCoconut(N, i);
            if (isK) {
                cout << N << " coconuts, " << i << " people and 1 monkey\n";
                break;
            } else {
                if (i == 2) {
                    cout << N << " coconuts, no solution\n";
                    break;
                }
            }
        }
    }
    return 0;
}