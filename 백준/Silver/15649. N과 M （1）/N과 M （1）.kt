lateinit var visit: Array<Boolean>  // visit의 각 idx값(num)을 확인했는지 여부 저장
lateinit var sequence: Array<Int> // 배열

// dfs() 정의
fun dfs(N: Int, M: Int, depth: Int) {
    for (num in 1..N) { // 1부터 N까지의 모든 num 체크
        if (visit[num] == false) {  // 해당 num을 확인하지 않았다면
            visit[num] = true   // 현재 확인했으므로 확인했다고 체크한 후
            sequence[depth] = num // 수열의 해당 depth번 째 요소에 추가
            if (depth >= M - 1) {   // sequence가 완성됐으면 출력
                sequence.forEach { print("$it ") }
                println()
            } else {    // sequence가 미완성이면
                dfs(N, M, depth + 1)    // sequence의 다음 요소 정하기
            }
            visit[num] = false  // 수열이 출력됐으면 visit 상태 원래대로 돌려놓기
        }
    }
}

// main() 실행
fun main() {
    val (N,M) = readln().split(" ").map { it.toInt() }
    visit =  Array(N + 1) { false }
    sequence = Array(M){ 0 }

    // dfs() 호출
    dfs(N, M, 0)
}