fun main() {
    val sb = StringBuilder()
    val N = readln().toInt()
    val scoreList = mutableListOf<List<String>>()

    repeat(N) {
        scoreList.add(readln().split(" "))
    }
    scoreList.sortBy { it[0] }
    scoreList.sortByDescending { it[3].toInt() }
    scoreList.sortBy { it[2].toInt() }
    scoreList.sortByDescending { it[1].toInt() }

    scoreList.forEach { sb.append(it[0]).append("\n") }

    print(sb)
}