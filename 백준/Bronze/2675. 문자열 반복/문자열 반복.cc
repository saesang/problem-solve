#include<iostream>
#include<string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int R; cin >> R;
		string s; cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int h = 0; h < R; h++) cout << s[j];
		}
		cout << '\n';
	}

	return 0;
}