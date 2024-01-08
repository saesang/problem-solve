fun main() {
    val sb = StringBuilder()
    val (N, M) = readln().split(" ").map { it.toInt() }
    val nums = readln().split(" ").map { it.toInt() }
    val sum = mutableListOf<Int>()

    for (i in nums.indices) {
        sum.add(
            if (i == 0) nums[i] else nums[i] + sum[i - 1]
        )
    }

    repeat(M) {
        val (start, end) = readln().split(" ").map { it.toInt() - 1 }
        sb.append(
            if (start == end) nums[start] else sum[end] - sum[start] + nums[start]
        ).append("\n")
    }
    print(sb)
}