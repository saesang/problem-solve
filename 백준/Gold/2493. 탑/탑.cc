#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> res(n+1);

    stack<pair<int, int>> st;

    for (int i = 1; i < n+1; i++) {
        int currentTop; cin >> currentTop;

        while (!st.empty() && st.top().second < currentTop) {
            st.pop();
        }

        if (st.empty()) {
            res[i] = 0;
        } else {
            res[i] = st.top().first;
        }

        st.push({i, currentTop});
    }
    
    for (int i = 1; i < n+1; i++) {
        cout << res[i] << ' ';
    }
}