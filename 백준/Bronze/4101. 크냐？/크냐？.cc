#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 1; int m = 1; // n,m 1로 초기화
	while (1) {
		cin >> n >> m;
		if (n != 0 && m != 0) {
			if (n > m) cout << "Yes";
			else cout << "No";
			cout << '\n';
		}
		else break;
	}

	return 0;
}