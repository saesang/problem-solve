#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
typedef long long ll;

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s = "";
    while (1) {
        int cnt = 0;
        getline(cin, s);
        if (s == "#") break;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' ||
                s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}