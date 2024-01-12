fun main() {
    val sb = StringBuilder()
    val N = readln().toInt()
    val guitars = mutableListOf<String>()

    repeat(N) {
        guitars.add(readln())
    }

    guitars.sort()
    guitars.sortBy { guitar ->
        guitar.map { if (it.isDigit()) it.digitToInt() else 0 }.sum()
    }
    guitars.sortBy { it.length }

    guitars.forEach { sb.append(it).append("\n") }

    print(sb)
}