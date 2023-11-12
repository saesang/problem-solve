lateinit var nums : Array<Int>
lateinit var sequence: Array<Int>
lateinit var sequenceStr: StringBuilder

fun backtracking(M:Int, depth:Int) {
    if (depth == M) {
        sequence.forEach { sequenceStr.append("$it ") }
        sequenceStr.append("\n")

        return
    }

    for (num in nums) {
        sequence[depth] = num
        backtracking(M, depth + 1)
    }
}

fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    nums = readln().split(" ").map { it.toInt() }.toTypedArray().sortedArray()
    sequence = Array(M) {0}
    sequenceStr = StringBuilder()

    backtracking(M, 0)

    print(sequenceStr)
}
