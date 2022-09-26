#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str = "";
	while (1) {
		getline(cin, str); // '.'전까지의 문장을 str에 저장
		if (str == ".") break;
		else {
			stack<char> s; // 괄호 넣었다 뺐다 하는 스택
			for (int i = 0; i < size(str); i++) {
				if (str[i] == '(' || str[i] == '[') s.push(str[i]);
				if (str[i] == ')') {
					if (s.empty() == 0 && s.top() == '(') s.pop();
					else s.push(str[i]);
				}
				if (str[i] == ']') {
					if (s.empty() == 0 && s.top() == '[') s.pop();
					else s.push(str[i]);
				}
			}
			if (s.empty()) cout << "yes" << '\n';
			else cout << "no" << '\n';
		}
	}
	
	return 0;
}