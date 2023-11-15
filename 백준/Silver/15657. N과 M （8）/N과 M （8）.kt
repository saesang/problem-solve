lateinit var nums : Array<Int>
lateinit var sequence: Array<Int>
lateinit var sequenceStr: StringBuilder

fun backtracking(N:Int, M:Int, depth:Int, prevIdx:Int) {
    if (depth == M) {
        sequence.forEach { sequenceStr.append("$it ") }
        sequenceStr.append("\n")

        return
    }

    for (idx in prevIdx until N) {
        sequence[depth] = nums[idx]
        backtracking(N, M, depth + 1, idx)
    }
}

fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    nums = readln().split(" ").map { it.toInt() }.toTypedArray().sortedArray()
    sequence = Array(M) {0}
    sequenceStr = StringBuilder()

    backtracking(N, M, 0, 0)

    print(sequenceStr)
}
