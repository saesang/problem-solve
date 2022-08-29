#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int total = 0;
	for (int i = 0; i < 5; i++) {
		int tmp; cin >> tmp;
		total += tmp * tmp;
	}
	int result = total % 10;
	cout << result;

	return 0;
}