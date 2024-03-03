#include<iostream>
#include<algorithm>

using namespace std;

int arr[10];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string n;
    cin >> n;

    int mx = 0;
    for (auto c : n) {
        int num = c - '0';

        arr[num]++;
        if (num == 6 || num == 9) {
            if ((arr[6] + arr[9]) % 2 == 1) {
                mx = mx > (arr[6] + arr[9]) / 2 + 1 ? mx : (arr[6] + arr[9]) / 2 + 1;
            } else {
                mx = mx > (arr[6] + arr[9]) / 2 ? mx : (arr[6] + arr[9]) / 2;
            }
        } else {
            mx = mx > arr[num] ? mx : arr[num];
        }
    }

    cout << mx;
}