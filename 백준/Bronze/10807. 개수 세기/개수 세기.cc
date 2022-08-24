#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

map<int, int> m; // <정수, 정수 개수>

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		m[tmp]++;
	}
	int v; cin >> v;
	if (m.find(v) == m.end()) cout << 0;
	else cout << m[v];

	return 0;
}