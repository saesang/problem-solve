fun main() {
    repeat(3) {
        var inputs = readln().split(" ").map { it.toInt() }
        var cnt = 0 // 등(1)의 개수

        for (i in inputs) {
            if (i == 1) {
                cnt++
            }
        }

        println(
            when (cnt) {
                0 -> "D"
                1 -> "C"
                2 -> "B"
                3 -> "A"
                else -> "E"
            }
        )
    }
}