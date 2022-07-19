#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int,string>> str; // 벡터 str의 요소 : (단어 길이, 단어)

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) { // str에 (단어 길이, 단어) 저장
		string strTmp; cin >> strTmp;
		str.push_back(pair<int, string>(strTmp.length(), strTmp));
	}
	sort(str.begin(), str.end()); // 오름차순으로 정렬

	// 중복 제거하고 str 출력
	cout << str[0].second << '\n';
	for (int i = 1; i < str.size(); i++) {
		if (str[i].second == str[i - 1].second) continue;
		else cout << str[i].second << '\n';
	}

	return 0;
}