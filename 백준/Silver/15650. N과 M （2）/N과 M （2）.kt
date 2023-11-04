lateinit var visit: Array<Boolean>
lateinit var sequence: Array<Int>

fun dfs(N: Int, M: Int, depth: Int) {
    for (num in 1..N) {
        if (visit[num] == false) {
            visit[num] = true
            if (depth == 0) {
                sequence[depth] = num
            } else {
                if (sequence[depth - 1] < num) {
                    sequence[depth] = num
                } else {
                    visit[num] = false
                    continue
                }
            }
            if (depth >= M - 1) {
                sequence.forEach { print("$it ") }
                println()
            } else {
                dfs(N, M, depth + 1)
            }
            visit[num] = false
        }
    }
}

fun main() {
    var (N, M) = readln().split(" ").map { it.toInt() }
    visit = Array(N + 1){ false }
    sequence = Array(M){ 0 }

    dfs(N, M, 0)
}