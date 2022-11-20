#include<iostream>
using namespace std;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int n;cin>>n;
    if(n%5!=0) cout<<n/5+1;
    else cout<<n/5;
    
    return 0;
}