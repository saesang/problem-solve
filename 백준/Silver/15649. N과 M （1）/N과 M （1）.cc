#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

/*
 * 풀이 과정
 * : m개를 뽑으려면, 이미 뽑은 수를 제외한 수열에서 새로운 수를 뽑는 과정을 반복해야 함
 * -> 재귀/백트래킹으로 해결
 * 1. bool vis[] 정의: 해당 숫자 탐색 여부 체크
 * 2. 함수 정의: void fun(int depth) -> depth 번째 숫자 뽑기
 * 3. base condition: depth > m일 때 종료
 * 4. 재귀 로직: vis 탐색하면서 탐색하지 않은 숫자를 순서대로 뽑고, fun(depth + 1) 실행
 */

int n,m;
int nums[9];
bool vis[9];

void fun(int depth) {
    if (depth > m) {
        for (int i = 1; i < m + 1; ++i) {
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i < n + 1; ++i) {
        if (vis[i]) continue;
        nums[depth] = i;
        vis[i] = true;
        fun (depth + 1);
        vis[i] = false;
    }
}

int main() {
    ios::sync_with_stdio;
    cin.tie(); cout.tie();

    cin >> n >> m;
    fun(1);
}