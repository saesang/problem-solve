fun main() {
    val S = readln()
    val strList = mutableListOf<String>()

    for (idx in 0 until S.length) {
        strList.add(S.substring(idx))
    }

    strList.sort()

    strList.forEach { println(it) }
}