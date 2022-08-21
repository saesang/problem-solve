#include<iostream>
#include<string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	string n; cin >> n; // N개의 숫자를 string에 저장
	int sum = 0; // 숫자의 합
	for (int i = 0; i < N; i++) {
		sum += (n[i] - '0'); // 각 숫자 int로 변환하여 sum에 더하기
	}
	cout << sum;

	return 0;
}