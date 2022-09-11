#include<iostream>
#include<queue>
using namespace std;

queue<int> q; // N장의 카드 

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 1; i < N + 1; i++) q.push(i); // 큐 q에 N까지의 정수 입력
	while (q.size() > 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();

	return 0;
}