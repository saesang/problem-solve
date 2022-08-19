#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

map<char, int> m; // <알파벳, 사용 횟수>
map<char, int>::iterator iter;
vector<char> v; // 사용 횟수

int main(void) {
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'a') && (s[i] <= 'z')) { // 알파벳이 소문자일 경우, 대문자로 변경
			s[i] -= 32;
		}
		m[s[i]]++; // 해당 알파벳 사용 횟수 증가
	}
	for (iter = m.begin(); iter != m.end(); iter++) { // v에 알파벳 사용 횟수 저장
		v.push_back(iter->second);
	}
	sort(v.begin(), v.end()); // v 오름차순 정렬

	if (v.size() == 1 || v[v.size() - 1] != v[v.size() - 2]) { // 최대 사용 횟수가 중복되는 알파벳이 없을 때
		int maxCnt = 0; // 최대 사용 횟수
		char result; // 최대 사용 알파벳
		for (iter = m.begin(); iter != m.end(); iter++) {
			if (iter->second >= maxCnt) {
				maxCnt = iter->second;
				result = iter->first;
			}
		}
		cout << result;
	}
	else cout << '?';

	return 0;
}