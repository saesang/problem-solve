#include<iostream>
#include<queue>
using namespace std;

queue<int> q; // N명의 사람

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K; cin >> N >> K;
	for (int i = 0; i < N; i++) q.push(i+1); // 큐 q에 N명의 사람 입력
	
	cout << '<';
	while (q.size()>1) {
		for (int i = 0; i < K-1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() <<'>';

	return 0;
}