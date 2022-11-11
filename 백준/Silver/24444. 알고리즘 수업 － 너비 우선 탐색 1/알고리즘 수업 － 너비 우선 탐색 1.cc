#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;
typedef long long ll;

vector<int> vec[100001]; // <u, v>를 요소로 가지는 벡터
bool visited[100001]={0}; // isVisited 확인할 bool 배열
queue<int> q; // 정점 보관할 큐
int result[100001]; // <i, 방문 순서>

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,M,R;cin>>N>>M>>R;
    for (int i = 0; i < M; ++i) {
        int u,v;cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for (int i = 0; i < 100001; ++i) {
        sort(vec[i].begin(),vec[i].end());
    }
    visited[R]=1;
    q.push(R); // q에 시작 정점 R 추가
    int cnt=1;
    result[R]=cnt; // result에 <R, cnt> 추가

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i = 0; i < vec[cur].size(); ++i) {
            int tmp=vec[cur][i];
            if(visited[tmp]==0) {
                visited[tmp]=1;
                q.push(tmp);
                cnt++;
                result[tmp]=cnt;
            }
        }
    }
    for (int i = 1; i <= N; ++i) {
        cout<<result[i]<<'\n';
    }

    return 0;
}