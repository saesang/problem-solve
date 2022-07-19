#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int>> coord;

int main(void) {
	int N; cin >> N;

	for (int i = 0; i < N; i++) { // coord에 (x, y) 저장
		int x, y; cin >> x >> y;
		coord.push_back(pair<int, int>(x, y));
	}

	sort(coord.begin(), coord.end());

	for (int i = 0; i < coord.size(); i++) {
		cout << coord[i].first << ' ' << coord[i].second << '\n';
	}

	return 0;
}