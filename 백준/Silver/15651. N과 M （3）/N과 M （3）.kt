// 같은 수를 여러 번 골라도 되므로 방문 여부 확인할 필요 없음!
// lateinit var visit: Array<Boolean>
lateinit var sequence: Array<Int>
lateinit var sequenceStr: StringBuilder   // Array 출력 시 시간 초과 발생 -> StringBuilder 사용

fun dfs(N: Int, M: Int, depth: Int) {
    // dfs 종료 조건
    if (depth == M) {
        sequence.forEach { sequenceStr.append("$it ") }
        sequenceStr.append("\n")

        return  // depth == M 이면 해당 단계 dfs 종료!
    }

    // dfs 호출 시 실행되는 메소드
    for (num in 1..N) {
        sequence[depth] = num
        dfs(N, M, depth + 1)
    }
}

fun main() {
    val (N,M) = readln().split(" ").map { it.toInt() }
    sequence = Array(M){ 0 }
    sequenceStr = StringBuilder()

    dfs(N, M, 0)

    print(sequenceStr)
}