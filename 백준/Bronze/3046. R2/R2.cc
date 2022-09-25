#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int R1, S; cin >> R1 >> S;
	int R2 = 2 * S - R1;
	cout << R2;

	return 0;
}