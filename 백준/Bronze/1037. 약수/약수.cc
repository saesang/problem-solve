#include<iostream>
#include<algorithm>

using namespace std;

int arr[51]; // 진짜 약수 배열

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N); // arr 오름차순 정렬

	cout << arr[0] * arr[N - 1]; // 결과값 출력

	return 0;
}