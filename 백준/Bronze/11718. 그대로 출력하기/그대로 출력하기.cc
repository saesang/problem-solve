#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (!cin.eof()) { // 입력값 없을 때까지 반복
		string s; getline(cin, s);
		cout << s << '\n';
	}

	return 0;
}