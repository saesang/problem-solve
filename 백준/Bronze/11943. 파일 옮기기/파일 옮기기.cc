#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A,B,C,D; cin>>A>>B>>C>>D;
    if(A+D>=B+C) cout<<B+C;
    else cout<<A+D;

    return 0;
}