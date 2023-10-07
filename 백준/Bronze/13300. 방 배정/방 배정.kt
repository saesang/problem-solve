fun main() {
    val (N, K) = readln().split(" ").map { it.toInt() }
    var sCnt = Array(12) {0}    // n학년 여학생 수 idx = 2(n-1), n학년 남학생 수 idx = 2n-1
    var rCnt = 0    // 필요한 방의 수

    // sCnt에 학년 별, 성별에 따라 학생 수 입력
    repeat (N) {
        var (S, Y) = readln().split(" ").map { it.toInt() }
        sCnt[2 * (Y - 1) + S]++
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
