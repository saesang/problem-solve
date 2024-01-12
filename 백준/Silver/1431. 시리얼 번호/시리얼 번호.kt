fun main() {
    val sb = StringBuilder()
    val N = readln().toInt()
    val guitars = mutableListOf<String>()

    repeat(N) {
        guitars.add(readln())
    }

    guitars.sortWith(
        compareBy<String> { it.length }
            .thenBy { guitar -> guitar.map { if (it.isDigit()) it.digitToInt() else 0 }.sum() }
            .thenBy { it }
    )

    guitars.forEach { sb.append(it).append("\n") }

    print(sb)
}