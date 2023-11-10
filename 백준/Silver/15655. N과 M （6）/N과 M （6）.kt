lateinit var nums: Array<Int>   // 주어진 서로 다른 N개의 정수 배열
lateinit var visit: HashMap<Int, Boolean>   // key가 N일 때, value가 Boolean인 HashMap
lateinit var sequence: Array<Int>   //  출력 수열
lateinit var sequenceStr: StringBuilder // 출력될 결과값

fun dfs(N: Int, M: Int, depth: Int) {
    if (depth == M) {
        sequence.forEach { sequenceStr.append("$it ") }
        sequenceStr.append("\n")

        return
    }

    for (num in nums) {
        if (visit[num] == false) {
            if (depth == 0 || sequence[depth - 1] < num) {
                visit[num] = true
                sequence[depth] = num
            } else continue
        } else continue
        dfs(N, M, depth + 1)
        visit[num] = false
    }
}

fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    nums = readln().split(" ").map { it.toInt() }.toTypedArray().sortedArray()
    visit = HashMap()
    for (num in nums) {
        visit[num] = false
    }
    sequence = Array(M) { 0 }
    sequenceStr = StringBuilder()

    dfs(N, M, 0)

    print(sequenceStr)
}