#include<iostream>
#include<queue>
using namespace std;

priority_queue<int,vector<int>,greater<int>> pq_mn; // 우선순위 큐

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		if (x == 0) {
			if (pq_mn.empty()) cout << 0 << '\n';
			else {
				cout << pq_mn.top() << '\n';
				pq_mn.pop();
			}
		}
		else pq_mn.push(x);
	}

	return 0;
}