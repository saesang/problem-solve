fun main() {
    val n = readln().toInt()
    val nums = readln().split(" ").map {it.toInt()}.sorted()
    val x = readln().toInt()

    var sp = 0
    var ep = nums.size - 1
    var ans = 0

    while (sp < ep) {
        if (nums[sp] + nums[ep] > x) {
            ep--
        } else if (nums[sp] + nums[ep] < x) {
            sp++
        } else {
            ans++
            sp++
            ep--
        }
    }

    println(ans)
}