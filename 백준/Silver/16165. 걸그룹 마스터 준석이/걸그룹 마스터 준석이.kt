fun main() {
    val(N, M) = readln().split(" ").map { it.toInt() }
    var hash = ArrayList<Pair<String, String>>()

    repeat(N) {
        val team = readln()
        val num = readln().toInt()

        repeat(num) {
            hash.add(Pair(team, readln()))
        }
    }
    // 이름 기준 정렬
    hash.sortBy { it.second }

    repeat(M) {
        val input = readln()
        val opt = readln().toInt()

        if (opt == 1) {
            hash.forEach { if (it.second == input) println(it.first) }
        } else {
            hash.forEach { if (it.first == input) println(it.second) }
        }
    }
}