#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int, int>> age; // <나이, 입력 순서>
vector<string> name; // 이름

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	int idx = 0;
	for (int i = 0; i < N; i++) {
		int nTmp; string sTmp;
		cin >> nTmp >> sTmp;
		age.push_back({ nTmp,idx });
		name.push_back(sTmp);
		idx++;
	}
	sort(age.begin(), age.end()); // 벡터 age 오름차순으로 정렬

	for (int i = 0; i < N; i++) {
		cout << age[i].first << ' ' << name[age[i].second] << '\n';
	}

	return 0;
}