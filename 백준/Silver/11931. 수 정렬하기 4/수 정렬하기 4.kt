fun main() {
    val sb = StringBuilder()
    val N = readln().toInt()
    val nums = mutableListOf<Int>()

    repeat(N) {
        nums.add(readln().toInt())
    }

    nums.sortDescending()

    nums.forEach { sb.append(it).append("\n") }

    print(sb)
}