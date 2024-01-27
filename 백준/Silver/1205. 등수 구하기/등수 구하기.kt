fun main() {
    val (n,t,p) = readln().split(" ").map { it.toInt() }
    var result = 0
    if (n == 0) {
        result = 1
    } else {
        val rank = readln().split(" ").map { it.toInt() }

        if (t < rank[n - 1]) {
            result = if (n == p) -1 else n + 1
        } else {
            for (idx in rank.indices) {
                if (t >= rank[idx]) {
                    result = idx + 1
                    break
                }
            }
            if (t == rank[n - 1] && n == p) result = -1
        }
    }

    println(result)
}
