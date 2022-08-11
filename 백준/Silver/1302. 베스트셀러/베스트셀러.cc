#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

map<string, int> books; // <책, 팔린 개수>

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string name; cin >> name;
		books[name]++; // 맵 books에 해당 책의 팔린 개수 증가시키기
	}

	// 베스트셀러 찾기
	string bestseller; int maxCount = 0;
	for (auto itr : books) {
		if (itr.second > maxCount) {
			maxCount = itr.second;
			bestseller = itr.first;
		}
	}

	cout << bestseller;

	return 0;
}