#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		queue<pair<int, int>> q; // <인덱스, 중요도>
		int priorityArr[101]; // 중요도 배열

		int N, M; cin >> N >> M;
		int order = 0; // 출력 순서

		for (int j = 0; j < N; j++) {
			int tmp; cin >> tmp;
			q.push(pair<int,int>(j, tmp)); // 큐	 q에 <인덱스, 중요도> 저장
			priorityArr[j] = tmp;
		}
		sort(priorityArr, priorityArr + N, greater<>()); // 배열 idxArr 내림차순 정렬

		int idx = 0;
		while (!q.empty()) {
			if (q.front().second == priorityArr[idx]) { // 중요도 == priorityArr[idx] 이면, 문서 출력
				if (q.front().first == M) {
					q.pop();
					order++;
					idx++;
					break; // 인덱스 M 문서가 출력될 때 while문 빠져나오기
				}
				q.pop();
				order++;
				idx++;
			}
			else if(q.front().second < priorityArr[idx]) { // 중요도 < priorityArr[idx] 이면, 문서 맨 뒤로 보내기
				q.push(q.front());
				q.pop();
			}
			else { // 중요도 > priorityArr[idx] 이면, 문서 출력(중복 문서 출력)
				q.pop();
				order++;
			}
		}
		cout << order << '\n'; // 출력 순서 출력
	}
	
	return 0;
}