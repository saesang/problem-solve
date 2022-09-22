#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = N-i-1; j > 0; j--) cout << ' ';
		for (int j = 0; j < 2 * i + 1; j++) cout << '*';
		cout << '\n';
	}
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < i + 1; j++) cout << ' ';
		for (int j = 2 * (N - i - 2) + 1; j > 0; j--) cout << '*';
		cout << '\n';
	}

	return 0;
}