#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}
	int mx = 0; // M 넘지 않는 최댓값
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++) {
				if (v[i]+v[j]+v[k] <= M) mx = max(mx, v[i] + v[j] + v[k]);
			}
		}
	}
	cout << mx;

	return 0;
}