#include<iostream>
#include<map>

using namespace std;

map<string, string> words; // <영단어, 미니언어>

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) { // 맵 words에 영단어와 미니언어를 저장
		string eng, minionese; char eql; cin >> eng >> eql >> minionese;
		words[eng] = minionese;
	}
	
	int T; cin >> T;
	for (int i = 0; i < T; i++) { // 번역하기
		int K; cin >> K;
		for (int j = 0; j < K; j++) {
			string key; cin >> key;
			cout << words[key] << ' ';
		}
		cout << '\n';
	}
	return 0;
}