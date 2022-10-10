#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        stack<char> st_l; // 문자 담는 스택(커서 기준 왼쪽)
        stack<char> st_r; // 문자 담는 스택(커서 기준 오른쪽)

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '-') {
                if(!st_l.empty()) {
                    st_l.pop();
                }
            } else if (s[i] == '<') {
                if (!st_l.empty()) {
                    st_r.push(st_l.top());
                    st_l.pop();
                }
            } else if (s[i] == '>') {
                if (!st_r.empty()) {
                    st_l.push(st_r.top());
                    st_r.pop();
                }
            } else {
                st_l.push(s[i]);
            }
        }
        while (st_l.size() > 0) {
            st_r.push(st_l.top());
            st_l.pop();
        }
        // 비밀번호 출력
        while (st_r.size() > 0) {
            cout << st_r.top();
            st_r.pop();
        }
        cout << '\n';
    }
    return 0;
}