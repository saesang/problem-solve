fun main() {
    val N = readln().toInt()
    var strList = ArrayList<Pair<String, Int>>()
    repeat(N) {
        var str = readln()
        strList.add(Pair(str, str.length))
    }
    var sortedStrList = strList.distinct()
        .sortedWith(
            compareBy<Pair<String, Int>> { it.second }.thenBy { it.first }
        )

    sortedStrList.forEach { println(it.first) }
}