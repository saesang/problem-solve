#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string A, B; cin >> A >> B; // A와 B string으로 입력
	
	// 상수가 읽는 A
	char tmpA;
	tmpA = A[0];
	A[0] = A[2];
	A[2] = tmpA;
	// 상수가 읽는 B
	char tmpB;
	tmpB = B[0];
	B[0] = B[2];
	B[2] = tmpB;

	// A, B를 int로 변환
	int AR = stoi(A);
	int BR = stoi(B);

	if (AR > BR) cout << AR;
	else cout << BR;

	return 0;
}