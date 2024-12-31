#include <iostream>
#include <vector>

using namespace std;

/*
  dfs 사용
*/

string alphabets = "AEIOU";
string ansWord;
int tmp;

void dfs(string word, int depth) {
    if (depth == 5) return;
    
    for (int i = 0; i < 5; i++) {
        ansWord += alphabets[i];
        tmp++;
        if (ansWord.compare(word) == 0) return;
        dfs(word, depth + 1);
        if (ansWord.compare(word) == 0) return;
        ansWord.pop_back();
    }
}

int solution(string word) {
    int answer = 0;
    
    dfs(word, 0);
    answer = tmp;
    
    return answer;
}