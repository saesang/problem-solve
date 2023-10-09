fun main() {
    val (N, K) = readln().split(" ").map { it.toInt() }
    var numsQueue = ArrayDeque<Int>()
    var resultList = ArrayList<Int>()
    var cnt = 0

    for (i in 1..N) {
        numsQueue.add(i)
    }

    while (numsQueue.size > 0) {
        cnt++
        if (cnt == K) {
            resultList.add(numsQueue.first())   // 결과값 resultList에 저장
            numsQueue.removeFirst()
            cnt = 0
        } else {
            numsQueue.add(numsQueue.first())
            numsQueue.removeFirst()
        }
    }

    // resultList 출력 형식에 맞게 출력
    println(
        resultList
            .map { it.toString() }
            .joinToString(prefix = "<", postfix = ">") {it}
    )
}