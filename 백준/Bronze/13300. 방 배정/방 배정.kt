fun main() {
    val inputs = readln().split(" ").map { it.toInt() }
    val N = inputs[0]
    val K = inputs[1]
    var sCnt = Array(13) {0}    // n학년 여학생 수 idx = 2n - 1, n학년 남학생 수 idx = 2n
    var rCnt = 0    // 필요한 방의 수

    // sCnt에 학년 별, 성별에 따라 학생 수 입력
    for (i in 1..N) {
        var sInfo = readln().split(" ").map { it.toInt() }
        if (sInfo[0] == 0) {
            sCnt[2 * sInfo[1] - 1]++
        } else {
            sCnt[2 * sInfo[1]]++
        }
    }

    // sCnt 탐색하며 방 개수 구하기
    for (s in sCnt) {
        if (s > 0) {
            if (s / K == 0) {
                rCnt++
            } else {
                rCnt = if (s % K == 0) (rCnt + s / K) else (rCnt + s / K + 1)
            }
        }
    }

    println(rCnt)
}