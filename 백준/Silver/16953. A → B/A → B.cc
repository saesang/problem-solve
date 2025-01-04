#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
 * B -> A가 되도록 하는 최솟값 구하기
 * : B의 끝 수가 1인 경우 1 빼기
 * : B의 끝 수가 1이 아닌 경우 2로 나누기
 */

int A, B;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> A >> B;

    while(B != A) {
        if (B < A) {
            cout << -1;
            return 0;
        }

        if (B % 10 == 1) {
            B /= 10;
        } else if (B % 2 == 0){
            B /= 2;
        } else {
            cout << -1;
            return 0;
        }
        ans++;
    }

    cout << ans + 1;
}