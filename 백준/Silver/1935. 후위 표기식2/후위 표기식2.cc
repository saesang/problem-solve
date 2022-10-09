#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<map>;

using namespace std;
typedef long long ll;

map<char,double> m; // <알파벳, 대응 숫자>
stack<double> st; // 알파벳 대응 숫자를 담는 스택

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;cin>>N;
    string s;cin>>s;
    double result=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] >= 65 && s[i] <= 90) {
            if(!m.count(s[i])) cin>>m[s[i]];
            st.push(m[s[i]]); // 알파벳 대응 숫자를 스택 st에 넣기
        }
        else {
            double operand1 = st.top();
            st.pop();
            double operand2 = st.top();
            st.pop();

            if(s[i] == '+') result = operand2 + operand1;
            if(s[i] == '*') result = operand2 * operand1;
            if(s[i] == '/') result = operand2 / operand1;
            if(s[i] == '-') result = operand2 - operand1;

            st.push(result);
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<st.top();

    return 0;
}