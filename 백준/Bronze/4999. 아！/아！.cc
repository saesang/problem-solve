#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string j, d;
    cin >> j >> d;
    if (j.size() >= d.size()) cout << "go";
    else cout << "no";

    return 0;
}