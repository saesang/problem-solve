import kotlin.math.abs

fun main() {
    val n = readln().toInt()
    val ranks = ArrayList<Int>()
    var anger: Long = 0

    repeat(n) {
        ranks.add(readln().toInt())
    }
    ranks.sort()

    for (idx in ranks.indices) {
        anger += abs(ranks[idx] - (idx + 1))
    }

    println(anger)
}