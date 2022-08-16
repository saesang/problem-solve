#include<iostream>
#include<string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	string sPattern; cin >> sPattern; // 파일 패턴. 첫번째 파일 이름으로 초기화
	for (int i = 1; i < N; i++) {
		string sTmp; cin >> sTmp; // 파일 이름 입력
		for (int j = 0; j < sPattern.size(); j++) { // 직전 파일 이름과 현재 파일 이름 비교
			if (sPattern[j] != sTmp[j]) sPattern[j] = '?';
		}
	}
	cout << sPattern;

	return 0;
}