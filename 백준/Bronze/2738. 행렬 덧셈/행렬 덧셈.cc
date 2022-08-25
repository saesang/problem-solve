#include<iostream>
using namespace std;

int nums_1[101][101]; // 행렬 이차원 배열
int nums_2[101][101]; // 행렬 이차원 배열

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) { // nums_1
		for (int j = 0; j < M; j++) {
			cin >> nums_1[i][j];
		}
	}
	for (int i = 0; i < N; i++) { // nums_2
		for (int j = 0; j < M; j++) {
			cin >> nums_2[i][j];
		}
	}
	for (int i = 0; i < N; i++) { // nums_1 + nums_2 출력
		for (int j = 0; j < M; j++) {
			cout << nums_1[i][j] + nums_2[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}