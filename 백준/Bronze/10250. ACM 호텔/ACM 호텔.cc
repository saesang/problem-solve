#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while (T--) {
		int H, W, N; cin >> H >> W >> N;
		int HNum = 0; int WNum = 0;
		
		if (N % H == 0) {
			HNum = H;
			WNum = N / H;
		}
		else {
			HNum = N % H;
			WNum = N / H + 1;
		}

		string HWNum;
		if (WNum < 10) HWNum = to_string(HNum) + "0" + to_string(WNum);
		else HWNum = to_string(HNum) + to_string(WNum);

		cout << HWNum << '\n';
	}

	return 0;
}