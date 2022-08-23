#include<iostream>
#include<algorithm>

using namespace std;

int scoreArr[10001]; // 점수

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, k; cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> scoreArr[i];
	}
	sort(scoreArr, scoreArr + N, greater<int>()); // 점수 내림차순 정렬
	
	cout << scoreArr[k - 1];

	return 0;
}