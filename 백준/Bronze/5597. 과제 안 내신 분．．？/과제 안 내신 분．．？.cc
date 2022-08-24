#include<iostream>
using namespace std;

int num[30]; // 출석 번호

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 28; i++) {
		int tmp; cin >> tmp;
		num[tmp] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (num[i] == 0) cout << i << '\n';
	}
	return 0;
}