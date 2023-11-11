// dfs()에 매개변수에 sequence[depth - 1]에 저장된 num의 nums 내 idx를 받는 prevIdx 변수를 추가한다.

lateinit var nums: Array<Int>   // 주어진 서로 다른 N개의 정수 배열
lateinit var visit: HashMap<Int, Boolean>   // key가 N일 때, value가 Boolean인 HashMap
lateinit var sequence: Array<Int>   //  출력 수열
lateinit var sequenceStr: StringBuilder // 출력될 결과값

fun dfs(N: Int, M: Int, depth: Int, prevIdx: Int) {
    if (depth == M) {
        sequence.forEach { sequenceStr.append("$it ") }
        sequenceStr.append("\n")

        return
    }

    for (idx in prevIdx until N) {
        if (visit[nums[idx]] == false) {
            visit[nums[idx]] = true
            sequence[depth] = nums[idx]
        } else continue
        dfs(N, M, depth + 1, idx)
        visit[nums[idx]] = false
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

    dfs(N, M, 0, 0)

    print(sequenceStr)
}
