#include<iostream>
#include<queue>
using namespace std;

int d[4]; // 거리값
priority_queue<int, vector<int>, greater<int>> pq; // 거리값 오름차순으로 정렬

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int x, y, w, h; cin >> x >> y >> w >> h;
	d[0] = x; d[1] = y; d[2] = w - x; d[3] = h - y; // 배열 d에 거리값 입력
	for (int i = 0; i < 4; i++) { // d의 요소들을 우선순위 큐 pq에 입력
		pq.push(d[i]);
	}
	cout << pq.top();

	return 0;
}