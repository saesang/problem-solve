import kotlin.math.max

var t = 0
lateinit var array: IntArray
lateinit var memo: IntArray

fun main() {
    init()
    for (i in 4 until memo.size) {
        memo[i] = ((memo[i - 1].toLong() + memo[i - 2] + memo[i - 3]) % 1000000009).toInt()
    }
    printAnswer()
}

fun init() = with(System.`in`.bufferedReader()) {
    t = readLine().toInt()
    var max = 3
    array = IntArray(t) {
        readLine().toInt().also {
            max = max(max, it)
        }
    }
    memo = IntArray(max + 1).apply {
        this[1] = 1
        this[2] = 2
        this[3] = 4
    }
    close()
}

fun printAnswer() = with(System.`out`.bufferedWriter()) {
    array.forEach {
        append("${memo[it]}\n")
    }
    flush()
    close()
}