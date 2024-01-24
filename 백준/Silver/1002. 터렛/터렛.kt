import kotlin.math.*

fun main() {
    val t = readln().toInt()

    repeat(t) {
        val position = readln().split(" ").map { it.toDouble() }
        val d = sqrt((position[3] - position[0]).pow(2) + (position[4] - position[1]).pow(2))
        val r1 = position[2]
        val r2 = position[5]

        when {
            d == 0.0 && r1 == r2 -> println(-1)
            d > r1 + r2 || d < abs(r1 - r2) || (d == 0.0 && r1 != r2) -> println(0)
            d == r1 + r2 || d == abs(r1 -r2) -> println(1)
            d < r1 + r2 || d > abs(r1 - r2) -> println(2)
        }
    }
}