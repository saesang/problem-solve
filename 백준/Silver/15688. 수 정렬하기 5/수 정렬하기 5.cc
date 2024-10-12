#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
 * counting sort를 이용한 오름차순 정리
 * : n의 범위가 10,000,000 이하이면 counting sort 활용 가능
 */

int n;
int numsP[1000010];
int numsM[1000010];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp < 0) {
            numsM[tmp * -1]++;
        } else if (tmp == 0) {
            numsP[0]++;
        } else {
            numsP[tmp]++;
        }
    }

    // numsM 절대값 내림차순 출력
    for (int i = 1000000; i > 0; i--) {
        if (numsM[i] > 0) {
            for (int j = 0; j < numsM[i]; j++) {
                cout << -1*i << '\n';
            }
        }
    }

    // numsP 절대값 오름차순 출력
    for (int i = 0; i <= 1000000; i++) {
        if (numsP[i] > 0) {
            for (int j = 0; j < numsP[i]; j++) {
                cout << i << '\n';
            }
        }
    }
}