#include<iostream>
using namespace std;

int num[8]; // 음계 배열
int ascending = 0; // ascending 판별
int descending = 0; // descending 판별

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 8; i++) cin >> num[i];
	for (int i = 0; i < 7; i++) {
		if (num[i] < num[i + 1]) ascending++;
		else if (num[i] > num[i + 1]) descending++;
	}
	
	// 결과 출력
	if (ascending == 7) cout << "ascending";
	else if (descending == 7) cout << "descending";
	else cout << "mixed";

	return 0;
}