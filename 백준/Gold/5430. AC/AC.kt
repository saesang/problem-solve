fun main() {
    val T = readln().toInt()

    repeat(T) {
        var p = readln()
        var n = readln().toInt()
        var nums = readln().split("[", "]", ",")
            .filter { it != "" }
            .map { it.toInt() }
        var dq = ArrayDeque<Int>()
        var isReverse = false
        var isError = false
        var resultList = ArrayList<Int>()

        nums.forEach { dq.addLast(it) }

        for (i in p.indices) {
            if (p[i] == 'R') {
                isReverse = !isReverse  // 한줄 트리거!
            } else {
                if (dq.isEmpty()) {
                    isError = true
                    break
                } else {
                    if (isReverse) {
                        dq.removeLast()
                    } else {
                        dq.removeFirst()
                    }
                }
            }
        }

        if (!isError) {
            while (!dq.isEmpty()) {
                if (isReverse) {
                    resultList.add(dq.removeLast())
                } else {
                    resultList.add(dq.removeFirst())
                }
            }
            println(
                resultList.joinToString(prefix = "[", separator = ",", postfix = "]") { it.toString() }
            )
        } else {
            println("error")
        }
    }
}
