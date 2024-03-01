fun main() {
    val sb = StringBuilder()
    val (nA, nB) = readln().split(" ").map { it.toInt() }
    val sA = readln().split(" ").map { it.toInt() }.toSortedSet()
    val sB = readln().split(" ").map { it.toInt() }.toSortedSet()

    for (i in sB) {
        if (sA.contains(i)) sA.remove(i)
    }
    sA.forEach { sb.append("$it ") }

    println(sA.size)
    println(sb)
}
