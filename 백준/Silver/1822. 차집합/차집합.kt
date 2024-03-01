import java.util.TreeSet

fun main() {
    val sb = StringBuilder()
    val (nA, nB) = readln().split(" ").map { it.toInt() }
    val sA = TreeSet(readln().split(" ").map { it.toInt() })
    val sB = TreeSet(readln().split(" ").map { it.toInt() })

    for (i in sB) {
        if (sA.contains(i)) sA.remove(i)
    }
    sA.forEach { sb.append("$it ") }

    println(sA.size)
    println(sb)
}