fun main() {
    val (N, M) = readln().split(" ").map { it.toInt() }
    val nums = readln().split(" ").map { it.toInt() }
    var numDeque = ArrayDeque<Int>()
    var cnt = 0

    for (i in 1..N) {
        numDeque.addLast(i)
    }

    for (num in nums) {
        var idx = 0
        for (i in numDeque.indices) {
            if (numDeque[i] == num) {
                idx = i
                break
            }
        }
        while (true) {
            if (num == numDeque.first()) {
                numDeque.removeFirst()
                break
            }
            if (idx <= numDeque.size / 2) {
                numDeque.addLast(numDeque.removeFirst())
                cnt++
            } else {
                numDeque.addFirst(numDeque.removeLast())
                cnt++
            }
        }
    }

    println(cnt)
}