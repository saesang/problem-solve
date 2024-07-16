#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

/*
 * 풀이 과정
 * : 재귀
 */

ll pow(ll a, ll b, ll c) {
    if (b == 1) return a % c;   // 지수 == 1이면 바로 나머지 반환
    ll val = pow(a, b/2, c);    // 지수/2인 pow 계산을 반복하여 지수 == 1일 때의 a % c 값 반환 받음 -> val = a % c
    val = val * val % c;    // val = (a % c) * (a % c) % c -> 지수/2를 했으므로 다시 현재 지수*2

    if (b % 2 == 0) return val; // 지수/2 처리를 했을 떼 나머지가 없었으므로 그대로 val 반환
    return val * a % c; // 지수/2 처리를 했을 때 나머지가 있었으므로 val * a % c 결과값 반환
}

int main() {
    ios::sync_with_stdio;
    cin.tie(); cout.tie();
    ll a,b,c;
    cin >> a >> b >> c;

    cout << pow(a, b, c);
}