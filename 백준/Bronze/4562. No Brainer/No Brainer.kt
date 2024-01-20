fun main() {
    val n = readln().toInt()

    repeat(n) {
        val (x,y) = readln().split(" ").map { it.toInt() }
        println(
            if (x < y) "NO BRAINS" else "MMM BRAINS"
        )
    }
}