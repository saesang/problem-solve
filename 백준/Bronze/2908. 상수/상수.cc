#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string A, B; cin >> A >> B; // A와 B string으로 입력
	
	// 상수가 읽는 A
	reverse(A.begin(), A.end());
	// 상수가 읽는 B
	reverse(B.begin(), B.end());

	// A, B를 int로 변환
	int AR = stoi(A);
	int BR = stoi(B);

	if (AR > BR) cout << AR;
	else cout << BR;

	return 0;
}