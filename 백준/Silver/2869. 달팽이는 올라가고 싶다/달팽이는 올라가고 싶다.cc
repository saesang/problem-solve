#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, V; cin >> A >> B >> V;
	int days = (V - A) / (A - B);

	(V - A) % (A - B) > 0 ? days += 2 : days++;

	cout << days;

	return 0;
}