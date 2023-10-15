fun main() {
    val n = readln().toInt()
    var ascendingSt = ArrayDeque<Int>()
    var mainSt = ArrayDeque<Int>()
    var result = StringBuilder()

    for (i in 1..n) {
        ascendingSt.addLast(i)
    }

    repeat(n) {
        var num = readln().toInt()

        while (!ascendingSt.isEmpty()) {
            if (num < ascendingSt.first()) break
            mainSt.addLast(ascendingSt.removeFirst())
            result.append("+")
        }
        if (num == mainSt.last()) {
            mainSt.removeLast()
            result.append("-")
        }
    }
    if (!mainSt.isEmpty()) println("NO") else result.forEach { println(it) }
}