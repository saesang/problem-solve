#include<iostream>
#include<queue>

using namespace std;

/*
 * pair<int, bool>을 저장하는 우선순위큐
 * int에는 절댓값을, bool에는 양수 여부를 표시
 * 같은 절댓값을 가지는 pair일 때에는 음수 출력
 */

int n, x;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    priority_queue<pair<int, bool>, vector<pair<int, bool>>, greater<>> pq;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            } else {
                if (pq.top().second) {
                    cout << pq.top().first << '\n';
                } else {
                    cout << -1 * pq.top().first << '\n';
                }
                pq.pop();
            }
        } else {
            if (x < 0) {
                pq.push({-1 * x, 0});
            } else {
                pq.push({x, 1});
            }
        }
    }
}