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

    string pw = "";
    while (1) {
        cin >> pw;
        if (pw == "end") break;
        int size = pw.size();

        bool isAcceptable = 1;
        bool isV = 0; // 모음 있는지 확인하는 bool
        int cntC = 0; // 연속되는 자음 count
        int cntV = 0; // 연속되는 모음 count
        for (int i = 0; i < size; ++i) {
            if (pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u') {
                isV = 1;
                cntV++;
                cntC = 0;
                if (cntV == 3) {
                    isAcceptable = 0;
                    break;
                }
            } else {
                cntC++;
                cntV = 0;
                if (cntC == 3) {
                    isAcceptable = 0;
                    break;
                }
            }
        }
        for (int i = 0; i < size - 1; ++i) {
            if (pw[i] == pw[i + 1]) {
                if (pw[i] != 'e' && pw[i] != 'o') isAcceptable = 0;
                break;
            }
        }
        if (!isV) isAcceptable = 0;
        if (isAcceptable) cout << '<' << pw << "> " << "is acceptable." << '\n';
        else cout << '<' << pw << "> " << "is not acceptable." << '\n';
    }

    return 0;
}