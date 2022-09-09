#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	int a; int b = n; int c = m;
	while (c != 0) {
		a = b % c;
		b = c;
		c = a;
	}

	cout << b << '\n' << (n * m) / b << '\n';

	return 0;
}