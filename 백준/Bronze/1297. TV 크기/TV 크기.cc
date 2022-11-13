#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    double D,H,W;
    cin>>D>>H>>W;
    double t= sqrt(pow(D,2)/ (pow(H,2)+ pow(W,2)));
    cout<<int(H*t)<<' '<<int(W*t);

    return 0;
}