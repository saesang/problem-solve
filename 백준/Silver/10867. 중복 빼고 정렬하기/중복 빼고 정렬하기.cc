#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>

using namespace std;

vector<int> tmpNums;
deque<int> nums;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		tmpNums.push_back(tmp);
	}
	sort(tmpNums.begin(), tmpNums.end()); // 오름차순 정렬. 중복 포함

	for (int i = 0; i < tmpNums.size(); i++) { // tmpNums에서 중복 제거하기 위해 덱 nums로 배열 옮기기
		if (i == 0) nums.push_back(tmpNums[i]);
		else {
			if (nums.back() != tmpNums[i]) nums.push_back(tmpNums[i]); // 중복되는 값 nums에 넣지 않기
		}
	}

	while (nums.size() > 0) { // nums 출력
		cout << nums.front() << ' ';
		nums.pop_front();
	}

	return 0;
}