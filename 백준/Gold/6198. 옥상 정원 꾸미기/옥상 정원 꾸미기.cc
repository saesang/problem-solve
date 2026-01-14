#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;

    long long cnt = 0;
    stack<int> st;

    for (int i = 0; i < n; i++) {
        int currentB; cin >> currentB;

        while(!st.empty() && currentB >= st.top()) {
            st.pop();
        }
        cnt += st.size();

        st.push(currentB);
    }

    cout << cnt;
}