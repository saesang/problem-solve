#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

vector<int> v; // 각 레벨 별 점수
int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int score = v.back(); // score를 v의 마지막 원소값으로 초기화
    int cnt = 0; // 점수 감소 횟수
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= score) {
            cnt += v[i] - score + 1;
            v[i] = score - 1;
        }
        score = v[i];
    }
    cout << cnt;

    return 0;
}