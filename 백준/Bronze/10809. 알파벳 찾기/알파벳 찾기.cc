#include<iostream>
#include<string>
using namespace std;

int alphabet[26];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 26; i++) { // 알파벳 배열 -1로 초기화
		alphabet[i] = -1;
	}
	string s; cin >> s;
	for (int i = s.length() - 1; i >= 0; i--) {
		for (int j = 97; j <= 122; j++) {
			if (int(s[i]) == j) alphabet[j - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << ' ';
	}

	return 0;
}