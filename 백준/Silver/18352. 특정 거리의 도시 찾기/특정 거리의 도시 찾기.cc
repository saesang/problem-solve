#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

/*
 * 시작 도시 1개, 시작 도시부터 끝 도시까지 BFS로 탐색
 * 탐색하다가 최단거리가 k일 때, 해당 도시 저장
 */

int n,m,k,x;
vector<int> city[300010];
bool vis[300010];
queue<int> q;
vector<int> kCity;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> k >> x;
    for (int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;
        city[start].push_back(end);
    }

    q.push(x);
    vis[x] = true;

    int dis = 0;
    while(!q.empty()) {
        int qsz = q.size();

        dis++;
        if (dis > k) {
            break;
        }

        for (int i = 0; i < qsz; i++) {
            int tmp = q.front(); q.pop();

            for (auto c : city[tmp]) {
                if (!vis[c]) {
                    q.push(c);
                    vis[c] = true;

                    if (dis == k) {
                        kCity.push_back(c);
                    }
                }
            }
        }
    }

    if (kCity.empty()) {
        cout << -1;
    } else {
        sort(kCity.begin(), kCity.end());
        for (auto kc : kCity) {
            cout << kc << '\n';
        }
    }
}