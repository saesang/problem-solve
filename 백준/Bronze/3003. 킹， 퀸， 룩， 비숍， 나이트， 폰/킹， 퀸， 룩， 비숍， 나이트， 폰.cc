#include<iostream>

using namespace std;

int standard[6] = { 1,1,2,2,2,8 };
int arr[6];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
		if (standard[i] < arr[i]) cout << standard[i] - arr[i] << ' ';
		else cout << standard[i] - arr[i] << ' ';
	}
	return 0;
}