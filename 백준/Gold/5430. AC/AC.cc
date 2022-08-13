#include<iostream>
#include<algorithm>
#include<string>
#include<deque>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		string p; cin >> p; // 함수 p
		int RNum = 0; // p에서의 R의 개수
		for (int j = 0; j < p.size(); j++) { // R의 개수 구하기
			if (p[j] == 'R') RNum++;
		}
		int n; cin >> n;
		bool errorCheck = 0; // error 체크
		bool reserve = 0; // R 관련 뒤집기 여부
		string tmpArr; cin >> tmpArr; // 배열 전체 string으로 저장
		deque<int> d; // 입력된 정수 덱
		int count = 0; // 정수 자릿수
		int idx = 1; // 정수 저장 시작 인덱스
		for (int j = 1; j < tmpArr.length(); j++) { // 덱 d에 정수 배열 저장
			count++;
			if (n != 0) {
				if (tmpArr[j] == ',' || tmpArr[j] == ']') { // 직전의 ,부터 다음 ,또는 ]까지의 정수 d에 저장
					d.push_back(stoi(tmpArr.substr(idx, count - 1)));
					idx = j + 1; // 정수 저장 시작 인덱스 j+1로 설정
					count = 0; // 정수 자릿수 0으로 설정
				}
			}
			else {
				errorCheck = 0;
				break;
			}
		}

		for (int j = 0; j < p.length(); j++) {
			if (p[j] == 'R') { // 순서 뒤집기
				if (reserve == 0) {
					reserve = 1;
				}
				else reserve = 0;
			}
			else if (p[j] == 'D') { // 맨 앞 요소 제거
				if (d.empty() != 1) {
					if (reserve == 0) d.pop_front();
					else d.pop_back();
				}
				else { // v가 비어있으면 errorCheck = 1 후 break
					errorCheck = 1; // errorCheck = 1
					break;
				}
			}
		}
		if (errorCheck == 0) { // 결과 출력
			if (d.empty() == 0) {
				cout << '[';
				if (reserve == 0) {
					while (d.size() != 1) {
						cout << d.front() << ',';
						d.pop_front();
					}
				}
				else {
					while (d.size() != 1) {
						cout << d.back() << ',';
						d.pop_back();
					}
				}
				cout << d.back() << ']' << '\n';
			}
			else cout << "[]" << '\n';
		}
		else cout << "error" << '\n';
	}
	return 0;
}