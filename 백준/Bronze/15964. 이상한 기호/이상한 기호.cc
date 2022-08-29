#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long A, B; cin >> A >> B;
	cout << (A + B) * (A - B);

	return 0;
}