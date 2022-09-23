#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	int mn = 5000; // 최소 봉지 개수


	if (N % 5 == 0) mn = N / 5;
	else if (N % 5 == 1) {
		if (N >= 6) mn = (N / 5) + 1; // (N/5)-1+2
		else if (N % 3 == 0) mn = N / 3;
		else mn = -1;
	}
	else if (N % 5 == 2) {
		if (N >= 12) mn = N / 5 + 2; // (N/5)-2+4
		else if (N % 3 == 0) mn = N / 3;
		else mn = -1;
	}
	else if (N % 5 == 3) {
		mn = N / 5 + 1; // 5키로짜리에 3키로봉지 1개 추가
	}
	else if (N % 5 == 4) {
		if (N >= 9) mn = N / 5 + 2; // (N/5)-4+8
		else if (N % 3 == 0) mn = N / 3;
		else mn = -1;
	}
	cout << mn;

	return 0;
}