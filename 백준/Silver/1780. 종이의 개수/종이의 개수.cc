#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
 * 풀이 과정
 * : 재귀 함수 정의, base condition 설정, 재귀 로직 구현
 * 1. int[] fun(int n, int r, int c) -> (r, c)에서의 n * n의 종이 자르기
 * 2. base condition -> 자를 종이 없을 때: n == 1
 * 3. n * n 탐색하면서 같은 수가 아니면 종이 자르고 탐색 -> 각 종이마다 fun(n / 3)
 *                  모두 같은 수이면 종이 + 1
 */

int n;
int board[3000][3000];
int ret[] = {0, 0, 0};  // -1, 0, 1 개수 초기화

void fun(int n, int r, int c) {
    int start = board[r][c];
    bool isOne = true;

    for (int i = r; i < r + n; ++i) {   // 종이 자르는 여부 판단
        for (int j = c; j < c + n; ++j) {
            if (board[i][j] != start) {
                isOne = false;
                break;
            }
        }
        if (!isOne) break;
    }

    if (!isOne) {
        int m = n / 3;
        for (int i = r; i < r + n; i += m) {
            for (int j = c; j < c + n; j += m) {
                fun(m, i, j);
            }
        }
    } else {    // 모두 같을 때 종이의 수 +1
        ret[start + 1]++;
    }
}

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
        }
    }

    fun(n, 0, 0);
    for (int cnt: ret) {
        cout << cnt << '\n';
    }
}