fun main() {
    val (n,t,p) = readln().split(" ").map { it.toInt() }
    var result = -1
    if (n == 0) {
        result = 1
    } else {
        val rank = readln().split(" ").map { it.toInt() }

        for (idx in rank.indices) {
            if (result < 0 && t >= rank[idx]) result = idx + 1
        }
        if (result < 0 && n < p) result = n + 1
        else if (n == p && rank[n - 1] == t) result = -1
    }

    println(result)
}