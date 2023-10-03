fun main() {
    val n = readln().toInt()
    // 정수 입력값 한 줄을 읽고, 공백 기준으로 분리한 후 int로 변경해서 nums에 저장
    var nums = readLine()!!.split(" ").map { it.toInt() }
    val x = readln().toInt()
    var cnt = 0

    nums = nums.sorted()

    var start = 0
    var end = n - 1

    while (start < end) {
        var sum = nums[start] + nums[end]

        if (sum == x) { cnt++ }
        if (sum <= x) { start++ } else { end-- }
    }

    println(cnt)
}