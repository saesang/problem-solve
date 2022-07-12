#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		stack<char> PS;
		string ps; cin >> ps; // 괄호 문자열 입력

		// (,) 짝 맞으면 PS.empty() == 1
		for (int j = 0; j < ps.length(); j++) {
			if (PS.empty() == 1 && ps[j] == ')') { // )(일 경우, PS.empty() == 0으로 만들고 for문 탈출하도록 설정
				PS.push(ps[j]);
				break;
			}
			if (ps[j] == '(') PS.push(ps[j]);
			else PS.pop();
		}

		// 결과값 출력
		if (PS.empty() == 1) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}