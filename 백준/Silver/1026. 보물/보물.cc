#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> numsA;
vector<int> numsB;

bool desc(int a, int b) {
	return a > b;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		numsA.push_back(tmp);
	}
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		numsB.push_back(tmp);
	}
	sort(numsA.begin(), numsA.end()); // numsA 오름차순 정렬
	sort(numsB.begin(), numsB.end(), desc); // numsB 내림차순 정렬

	int S = 0;
	for (int i = 0; i < N; i++) {
		S += numsA[i] * numsB[i];
	}
	cout << S;

	return 0;
}