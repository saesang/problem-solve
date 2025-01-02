#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

/*
* 각 수 오름차순 정렬
* 1 3 5 7
* 2 2 6 8
* 2 4 4 6
* 각 자리 수 비교하다가 A => B이면 B 자릿수만 증가시키면서 비교, A < B이면 answer++;
*/

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    vector<int> newA = A;
    vector<int> newB = B;
    queue<int> q;
    
    
    int sz = A.size();
    
    sort(newA.begin(), newA.end());
    sort(newB.begin(), newB.end());
    
    for (int i = 0; i < sz; i++) {
        q.push(newB[i]);
    }
    
    for (int i = 0; i < sz; i++) {
        if (newA[i] < q.front()) {
            answer++;
        } else {
            while (!q.empty()) {
                if (newA[i] < q.front()) {
                    answer++;
                    break;
                }
                q.pop();
            }     
        }
        if (!q.empty()) {
            q.pop();
        }
    }
    
    return answer;
}