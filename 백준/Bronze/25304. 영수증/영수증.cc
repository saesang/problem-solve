#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int X, N; cin >> X >> N;
	int totalPrice = 0; // 총 금액
	for (int i = 0; i < N; i++) {
		int a, b; cin >> a >> b;
		totalPrice += a * b;
	}
	if (totalPrice == X) cout << "Yes";
	else cout << "No";

	return 0;
}