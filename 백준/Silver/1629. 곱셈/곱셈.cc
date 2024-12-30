#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * A^2 % C = (A % C)*(A % C) % C
 * A^B % C = (A^B/2 * A^B/2) % C
 * : 위 조건을 이용하여 재귀로 해결
 */

long long pow(int a, int b, int c) {
    if (b == 1) return a % c;
    long long ans = pow(a, b/2, c); // A^B % C = (A^B/2 * A^B/2) % C
    ans = ans * ans % c; // A^2 % C = (A % C)*(A % C) % C

    if (b % 2 == 0) {
        return ans;
    } else {
        return ans * a % c;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A, B, C;
    cin >> A >> B >> C;

    cout << pow(A, B, C);
}