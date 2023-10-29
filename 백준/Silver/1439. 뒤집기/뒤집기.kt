fun main() {
    val S = readln()
    var prev = S[0]
    var cnt = 0

    for (c in S) {
        if (prev != c) cnt++ else cnt
        prev = c
    }
    println(
        if (cnt % 2 == 0) cnt / 2 else cnt / 2 + 1
    )
}