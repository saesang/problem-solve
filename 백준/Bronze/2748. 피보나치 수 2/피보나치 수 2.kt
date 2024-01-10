fun main() {
    val n = readln().toInt()
    val fibonacci = mutableListOf<Long>()
    fibonacci.add(0)
    fibonacci.add(1)

    for (i in 2 .. n) {
        fibonacci.add(fibonacci[i - 1] + fibonacci[i - 2])
    }

    println(fibonacci[n])
}