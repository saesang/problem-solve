#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int arr[1000000];

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;cin>>N;
    for (int i = 0; i < N; ++i) {
        int G;cin>>G;
        bool tri=false;
        vector<int>nums;
        for (int j = 0; j < G; ++j) {
            int num;cin>>num;
            nums.push_back(num);
        }
        for(int m=1;m<999999;m++) {
            tri = false;
            for (int j = 0; j < m; ++j) {
                arr[j]=0;
            }
            for (int j = 0; j < G; ++j) {
                arr[nums[j]%m]++;

                if(arr[nums[j]%m]>1) {
                    tri=true;
                    break;
                }
            }
            if(tri==false) {
                cout<<m<<'\n';
                break;
            }
        }
    }

    return 0;
}