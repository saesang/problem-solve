fun main() {
    val N = readln().toInt()
    var cards = ArrayDeque<Int>()

    for (i in 1..N) {
        cards.addLast(i)
    }

    while (cards.size > 1) {
        cards.removeFirst()
        cards.addLast(cards.removeFirst())
    }

    println(cards.first())
}