#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 풀이 과정
 * : 하노이탑 쌓기
 * 1. 귀납형식으로 생각 -> n개의 원판을 dest로 옮기려면, n-1개의 원판을 6-start-dest로 옮겨야 한다.
 * 2. base condition 작성
 * 3. 함수 로직 짜기
 */

int n;

void hanoi(int start, int dest, int m) {
    if (m == 1) {
        cout << start << ' ' << dest << '\n';
        return;
    };

    hanoi(start, 6-start-dest, m - 1);  // m - 1개의 원판을 6-start-dest로 옮기기
    cout << start << ' ' << dest << '\n';   // m번째 원판(가장 큰 원판)을 dest로 옮기기
    hanoi(6-start-dest, dest, m - 1);   // m - 1개의 원판을 dest로 옮기기: 가장 큰 원판 위에 쌓기
}

int main() {
    ios::sync_with_stdio;
    cin.tie(); cout.tie();

    cin >> n;

    cout << (1<<n) - 1 << '\n'; // 몰라도 됨
    hanoi(1, 3, n);
}