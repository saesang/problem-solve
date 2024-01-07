fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    val strHash = HashSet<String>()
    var cnt = 0

    repeat(N) {
        strHash.add(readln())
    }

    repeat(M) {
        if (strHash.contains(readln())) cnt++
    }

    println(cnt)
}