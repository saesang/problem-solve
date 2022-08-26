#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
		else s[i] -= 32;
	}
	cout << s;

	return 0;
}