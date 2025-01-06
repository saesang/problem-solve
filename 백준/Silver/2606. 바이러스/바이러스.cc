#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
 * 입력값이 dfs 입력값 느낌
 * : 각 입력 값을 pair<int, int>로 받고, first와 second를 비교하며 cnt++
 */

int n, m;
int cnt;
bool vis[101];
vector<pair<int, int>> vec;

void dfs(int start) {
    for (int i = 0; i < m; i++) {
        if (vec[i].first == start && !vis[vec[i].second]) {
            cnt++;
            vis[vec[i].second] = true;
            dfs(vec[i].second);
        } else if (vec[i].second == start && !vis[vec[i].first]) {
            cnt++;
            vis[vec[i].first] = true;
            dfs(vec[i].first);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int first, second;
        cin >> first >> second;
        vec.push_back({first, second});
    }

    vis[1] = true;
    dfs(1);

    cout << cnt;
}