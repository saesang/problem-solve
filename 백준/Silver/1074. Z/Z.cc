#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 풀이 과정
 * : 반복되는 로직 찾아서 재귀 함수 정의, base condition 설정, 재귀식 설정
 * 1. void fun(int n, int r, int c) -> 2^2n 크기의 배열에서 r행 c열의 방문 순서 반환
 * 2. base condition -> n == 0일 때 return 0;
 * 3. 전체 board가 사분면으로 나뉘어져 반복되므로, 사분면 기준으로 나눠서 구현
 */

int n,r,c;

int fun (int n, int r, int c) {
    if (n == 0) return 0;   // base condition
    int half = 1<<(n - 1); // 2^(n-1)

    if (r < half && c < half) return fun(n - 1, r, c);  // 1사분면
    if (r < half && c >= half) return half * half + fun(n - 1, r, c - half);    // 2사분면
    if (r >= half && c < half) return 2 * half * half + fun(n - 1, r - half, c);    // 3사분면
    return 3 * half * half + fun(n - 1, r - half, c - half);    // 4사분면
}

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n >> r >> c;
    cout << fun(n, r, c);
}