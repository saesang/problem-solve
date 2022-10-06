#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>

using namespace std;
typedef long long ll;

stack<char> st; // 알파벳 넣을 스택
string result; // 결과 문자열

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int size = s.size();
    bool isTag=0; // 태그 내부의 문자열인지 확인하는 bool
    for (int i = 0; i < size; i++) {
        if(isTag==0) {
            if (s[i] != '<' && s[i] != '>' && s[i] != ' ') {
                st.push(s[i]);
            }
            else if(s[i]=='<'){
                while(st.size()>0) {
                    result += st.top();
                    st.pop();
                }
                result+=s[i];
                isTag=1;
            }
            else if(s[i]==' ') {
                while(st.size()>0) {
                    result+=st.top();
                    st.pop();
                }
                result+=s[i];
            }
        }
        else {
            if(s[i]=='>') {
                result+=s[i];
                isTag=0;
            }
            else {
                result+=s[i];
            }
        }
    }
    while(st.size()>0) {
        result += st.top();
        st.pop();
    }
    cout<<result;

    return 0;
}