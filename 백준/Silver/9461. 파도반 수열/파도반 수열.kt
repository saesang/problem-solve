fun main() {
    val T = readln().toInt()

    repeat(T) {
        val N = readln().toInt()
        val pn = mutableListOf<Long>()
        repeat(3) { pn.add(1) }
        repeat(2) { pn.add(2) }

        for (idx in 5..<N) {
            pn.add(pn[idx - 5] + pn[idx - 1])
        }

        println(pn[N - 1])
    }
}