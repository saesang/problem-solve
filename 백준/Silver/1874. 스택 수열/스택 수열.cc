#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int nums[100001];
stack<int> s1;
stack<int> s2;
string s=""; // +,- 배열 저장

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	for (int i = n; i > 0; i--) s2.push(i); // 스택 s2에 1,2,3,4,...,n 까지 저장
	for (int i = 0; i < n; i++) {
		while (!s2.empty()) { // nums[i]가 s1.top()이 될 때까지 s2 요소 s1으로 옮기기, 옮긴 횟수만큼 s에 + 저장
			if (nums[i] < s2.top()) break;
			s1.push(s2.top());
			s2.pop();
			s += "+\n";		
		}
		if (!s1.empty()) {
			if (nums[i] == s1.top()) { // nums[i] == s1.top() 이면 s1.pop() 실행, s에 - 저장
				s1.pop();
				s += "-\n";
			}
		}
	}
	if (!s1.empty()) cout << "NO";
	else cout << s;

	return 0;
}