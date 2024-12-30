#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * 숫자 중복 가능, 수열 중복 불가
 * : 입력 수열에서 중복값 제거한 후 오름차순으로 정렬, 이후 백트래킹으로 수열 만들기
 */

int N,M;
vector<int> v;
vector<int> ans;

void backtracking(int n, int m, int depth) {
    if (depth >= m) {
        for (int num : ans) {
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (ans.empty() || v[i] >= ans.back()) {
            ans.push_back(v[i]);
            backtracking(n, m, depth + 1);
            ans.erase(ans.end() - 1);
        }
    }
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    // 오름차순 정렬
    sort(v.begin(), v.end());

    // 중복 원소 제거
    v.erase(unique(v.begin(), v.end()), v.end());

    int sz = v.size();
    backtracking(sz, M, 0);
}