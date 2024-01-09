fun main() {
    val (N, K) = readln().split(" ").map { it.toInt() }
    val nums = mutableListOf<Int>()

    repeat(N) {
        nums.add(readln().toInt())
    }
    nums.sortDescending()

    var cnt = 0
    var remain = K

    for (money in nums) {
        if (money > K) continue
        else {
            cnt += (remain / money)
            remain %= money

            if (remain == 0) break
        }
    }

    println(cnt)
}