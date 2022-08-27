#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		string s; cin >> s;
		cout << s[0] << s[s.size() - 1] << '\n';
	}

	return 0;
}