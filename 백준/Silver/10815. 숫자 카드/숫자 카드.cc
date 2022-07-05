#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> nums;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		nums.push_back(tmp);
	}
	sort(nums.begin(), nums.end());

	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int find_value; cin >> find_value;
		cout << binary_search(nums.begin(), nums.end(), find_value) << ' ';
	}
	return 0;
}