#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long N, M; cin >> N >> M;

	if (N >= M) cout << N - M;
	else cout << M - N;

	return 0;
}