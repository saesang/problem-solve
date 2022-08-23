#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	int result = 1;
	for (int i = N; i > 0; i--) {
		result *= i;
	}

	cout << result;

	return 0;
}