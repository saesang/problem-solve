#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

vector<int> cards; // 상근이의 숫자 카드
map<int, int> m; // <카드 숫자, 카드 개수>

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) { // cards 벡터에 카드 입력, m에 카드 숫자 별 개수 입력
		int tmp; cin >> tmp;
		cards.push_back(tmp);
		m[tmp]++;
	}
	sort(cards.begin(), cards.end()); // 상근이 cards 오름차순 정렬


	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int num; cin >> num;
		if (binary_search(cards.begin(), cards.end(), num) == 0) cout << 0 << ' ';
		else cout << m[num] << ' ';
	}
	return 0;
}