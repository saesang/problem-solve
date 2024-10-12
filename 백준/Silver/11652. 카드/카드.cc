#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
 * nums[]에 카드 숫자를 다 저장한 후, 오름차순 정렬을 한다
 * nums[]를 탐색하면서 누적 카드의 수를 cnt[]에 저장한다
 * ex) nums[] = {1,1,1,2,3}
 *     cnt[] = {1,2,3,1,1}
 * cnt[]에서 최댓값 인덱스가 i라 할 때, 정답은 nums[i]를 이다.
 */

int n;
vector<long long> nums;
vector<pair<int, int>> cnt;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        long long tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }

    sort(nums.begin(), nums.end());

    cnt.push_back({0, 1});
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1]) {
            cnt.push_back({i, cnt[i-1].second + 1});
        } else {
            cnt.push_back({i, 1});
        }
    }

    sort(cnt.begin(), cnt.end(), cmp);

    cout << nums[cnt[0].first];
}