lateinit var graph: Array<IntArray> // 정점 간의 연결 유무
lateinit var visit: BooleanArray // dfs: 해당 정점 방문 유무
lateinit var inQueue: BooleanArray // bfs: 해당 정점 방문 유무
lateinit var dfsResult: ArrayList<Int>
lateinit var bfsResult: ArrayList<Int>

fun main() {
    val sb = StringBuilder()
    val (n,m,v) = readln().split(" ").map { it.toInt() }
    graph = Array(n + 1) { IntArray(n + 1) }
    visit = BooleanArray(n + 1)
    inQueue = BooleanArray(n + 1)
    dfsResult = ArrayList()
    bfsResult = ArrayList()

    repeat(m) {
        val (i,j) = readln().split(" ").map { it.toInt() }
        // 양방향 연결
        graph[i][j] = 1
        graph[j][i] = 1
    }

    dfs(v)
    bfs(v)

    dfsResult.forEach { sb.append("$it ") }
    sb.append("\n")
    bfsResult.forEach { sb.append("$it ") }

    print(sb)
}

fun dfs(v: Int) {
    visit[v] = true
    dfsResult.add(v)

    for (i in graph[v].indices) {
        if (graph[v][i] == 1 && !visit[i]) dfs(i)
    }
}

fun bfs(v: Int) {
    val queue = ArrayList<Int>()
    queue.add(v)
    inQueue[v] = true

    while (queue.isNotEmpty()) {
        val w = queue.removeFirst()
        bfsResult.add(w)

        for (i in graph[w].indices) {
            if (graph[w][i] == 1 && !inQueue[i]) {
                queue.add(i)
                inQueue[i] = true
            }
        }
    }
}