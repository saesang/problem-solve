#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

string s;
stack<char> st;
int cnt;
bool isClose;

/*
 * 스택 st에 (를 담고 )가 입력되면 (를 뺀다
 * (를 담을 때마다 isClose = false
 * isClose == false 이면 ) 입력 시 st.pop() 후 cnt += st.size(), isClose = true
 * isClose == true 이면 ) 입력 시 st.pop() 후 cnt++, isClose = true
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> s;

    for (auto c : s) {
        if (c =='(') {
            st.push(c);
            isClose = false;
        } else {
            st.pop();
            if (isClose) {
                cnt++;
                isClose = true;
            } else {
                cnt += st.size();
                isClose = true;
            }
        }
    }

    cout << cnt;

    return 0;
}