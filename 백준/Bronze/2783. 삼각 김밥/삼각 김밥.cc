#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    double X,Y;cin>>X>>Y;
    double mn = X/Y;
    int N;cin>>N;
    for (int i = 0; i < N; ++i) {
        double xTmp,yTmp;cin>>xTmp>>yTmp;
        mn=min(xTmp/yTmp,mn);
    }
    printf("%0.2lf",mn*1000);

    return 0;
}