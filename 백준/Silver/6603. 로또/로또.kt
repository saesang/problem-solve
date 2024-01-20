lateinit var lotto: ArrayList<Int>
lateinit var visit: Array<Boolean>
lateinit var result: Array<Int>
lateinit var resultString: StringBuilder

fun main() {
    while (true) {
        val input = readln().split(" ").map { it.toInt() }
        if (input[0] == 0) break

        lotto = ArrayList()
        for (idx in 1..<input.size) lotto.add(input[idx])

        visit = Array(50) { false }
        result = Array(6) { 0 }
        resultString = StringBuilder()

        backtracking(6, 0)

        println(resultString)
    }
}

fun backtracking(size: Int, depth: Int) {
    if (depth == size) {
        result.forEach { resultString.append("$it ") }
        resultString.append("\n")

        return
    }

    lotto.forEach {
        if (!visit[it] && (depth == 0 || result[depth - 1] < it)) {
            visit[it] = true
            result[depth] = it
            backtracking(size, depth + 1)
            visit[it] = false   // 탐색 마친 후에 원래대로 돌려놓기
        }
    }
}