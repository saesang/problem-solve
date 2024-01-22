lateinit var graph: Array<IntArray>
lateinit var check: Array<Boolean>  // 해당 컴퓨터 체크 여부
var virus = 0

fun main() {
    val n = readln().toInt()
    val link = readln().toInt()

    graph = Array(n + 1) { IntArray(n + 1) }
    check = Array(n + 1) { false }

    repeat(link) {
        val (c1,c2) = readln().split(" ").map { it.toInt() }
        graph[c1][c2] = 1
        graph[c2][c1] = 1
    }

    dfs(1)

    println(virus)
}

fun dfs(start: Int) {
    check[start] = true
    for (c in graph[start].indices) {
        if (graph[start][c] == 1 && !check[c]) {
            if (c != 1) virus++
            check[c] = true
            dfs(c)
        }
    }
}