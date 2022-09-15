#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	vector<string> v; // 입력된 보드
	for (int i = 0; i < N; i++) { // 입력된 보드 한줄씩 벡터 v에 저장
		string tmp; cin >> tmp;
		v.push_back(tmp);
	}
	string whiteFirst[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" ,"WBWBWBWB","BWBWBWBW" ,"WBWBWBWB","BWBWBWBW" };
	string blackFirst[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" ,"BWBWBWBW","WBWBWBWB" ,"BWBWBWBW","WBWBWBWB" };
	
	int mn = 64;
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int cnt_w = 0; int cnt_b = 0;
			for (int k = 0; k < 8; k++) {
				for (int h = 0; h < 8; h++) {
					if (whiteFirst[k][h] != v[k+i][h+j]) cnt_w++;
					if (blackFirst[k][h] != v[k+i][h+j]) cnt_b++;
				}
			}
			if (cnt_w < mn) mn = cnt_w;
			if (cnt_b < mn) mn = cnt_b;
		}
	}

	cout << mn;

	return 0;
}