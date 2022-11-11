#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int num[3]; // 삼각형의 각 변의 길이

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (1) {
		for (int i = 0; i < 3; i++) cin >> num[i];
		sort(num, num + 3); // 변의 길이 오름차순으로 정렬
		if (num[0] != 0 || num[1] != 0 || num[2] != 0 && num[0] != num[2]) {
			if (pow(num[0], 2) + pow(num[1], 2) == pow(num[2], 2)) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else break;
	}

	return 0;
}