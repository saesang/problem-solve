#include<iostream>
#include<algorithm>
#include<string>
#include<stack>

using namespace std;

stack<char> chars_1;
stack<char> chars_2;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str; cin >> str; // 문자열 입력
	int M; cin >> M;
	
	int N = str.length();
	for (int i = 0; i < N; i++) { // chars_1에 char 형태로 str 저장
		chars_1.push(str[i]);
	}

	// 명령어 별로 커서 위치 이동시키기
	for (int i = 0; i < M; i++) {
		char command; cin >> command; // 명령어 입력

		if (command == 'L') {
			if (chars_1.empty() != 1) {
				chars_2.push(chars_1.top());
				chars_1.pop();
			}
		}
		if (command == 'D') {
			if (chars_2.empty() != 1) {
				chars_1.push(chars_2.top());
				chars_2.pop();
			}
		}
		if (command == 'B') {
			if (chars_1.empty() != 1) {
				chars_1.pop();
			}
		}
		if (command == 'P') {
			char c; cin >> c; // 추가할 문자 입력
			chars_1.push(c);
		}
	}

	while (chars_1.empty() != 1) { // 문자열 출력 위해 char_2로 모든 요소 이동
		chars_2.push(chars_1.top());
		chars_1.pop();
	}
	while (chars_2.empty() != 1) { // 출력
		cout << chars_2.top();
		chars_2.pop();
	}

	return 0;
}