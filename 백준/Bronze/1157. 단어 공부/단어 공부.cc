#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

map<char, int> m; // <알파벳, 사용 횟수>
map<char, int>::iterator iter;
vector<pair<int, char>> v; // <사용 횟수, 알파벳>

int main(void) {
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'a') && (s[i] <= 'z')) { // 알파벳이 소문자일 경우, 대문자로 변경
			s[i] -= 32;
		}
		m[s[i]]++; // 해당 알파벳 사용 횟수 증가
	}
	for (iter = m.begin(); iter != m.end(); iter++) { // v에 알파벳 별 사용 횟수 저장
		v.push_back(make_pair(iter->second, iter->first));
	}
	sort(v.begin(), v.end()); // v 오름차순 정렬

	if (v.size() == 1 || v[v.size() - 1].first != v[v.size() - 2].first) { // 최대 사용 횟수가 중복되는 알파벳이 없을 때
		cout << v.back().second;
	}
	else cout << '?';

	return 0;
}