fun main() {
    val N = readlnOrNull() ?: return
    var cnts = Array(10) { 0 }
    var mxCnt = 0
    var result = 0

    for (i in N.indices) {
        if (N[i].digitToInt() == 6 || N[i].digitToInt() == 9) {
            cnts[6]++   // 6 또는 9 나오면 cnts[6]에 합쳐서 카운트
        } else {
            cnts[N[i].digitToInt()]++
        }
    }

    if ((cnts[6] % 2) == 0) {
        cnts[6] = cnts[6] / 2
    } else {
        cnts[6] = cnts[6] / 2 + 1
    }

    for (i in cnts.indices) {
        if (mxCnt < cnts[i]) {
            mxCnt = cnts[i]
        }
    }

    result = mxCnt

    println(result)
}
