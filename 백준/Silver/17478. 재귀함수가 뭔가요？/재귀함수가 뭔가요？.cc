#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
 * 풀이 과정
 * : 반복되는 로직 찾아서 재귀 함수 정의, base condition 설정, 재귀식 설정
 * 1. void fun(int n, int tmp) -> tmp번의 챗봇 응답 호출 출력, n은 최초 입력 값
 * 2. base condition -> tmp == 0일 때 return "재귀함수가 뭔가요?""재귀함수는 자기 자신을 호출하는 함수라네"라고 답변하였지.;
 * 3. fun(tmp - 1) 호출 반복
 */

int n;

void fun (int n, int tmp) {
    int underBarCnt = n - tmp;
    string underBar;
    vector<string> replies = {"\"재귀함수가 뭔가요?\"", "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.", "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.", "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""};

    for (int i = 0; i < underBarCnt; ++i) {
        underBar += "____";
    }
    if (tmp == 0) {   // base condition
        replies = {"\"재귀함수가 뭔가요?\"", "\"재귀함수는 자기 자신을 호출하는 함수라네\""};
        for (const string& reply : replies) {
            cout << underBar << reply << '\n';
        }
        cout << underBar << "라고 답변하였지." << '\n';
        return;
    }
    for (const string& reply : replies) {
        cout << underBar << reply << '\n';
    }
    fun (n, tmp - 1);
    cout << underBar << "라고 답변하였지." << '\n';
}

int main() {
    ios::sync_with_stdio();
    cin.tie(); cout.tie();

    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << '\n';
    fun(n, n);
}