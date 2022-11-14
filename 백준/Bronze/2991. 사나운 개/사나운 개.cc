#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

void dogAttack(int remain_1,int remain_2,int A,int B,int C,int D) {
    if (remain_1==0) remain_1+=(A+B);
    if (remain_2==0) remain_2+=(C+D);

    if(remain_1<=A&&remain_2<=C) cout<<2;
    else if(remain_1>A&&remain_2>C) cout<<0;
    else cout<<1;
    cout<<' ';
}

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A,B,C,D;cin>>A>>B>>C>>D;
    int P,M,N;cin>>P>>M>>N;

    dogAttack(P%(A+B),P%(C+D),A,B,C,D);
    dogAttack(M%(A+B),M%(C+D),A,B,C,D);
    dogAttack(N%(A+B),N%(C+D),A,B,C,D);

    return 0;
}