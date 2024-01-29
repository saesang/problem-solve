fun main() {
    val (n,k) = readln().split(" ").map { it.toInt() }
    val nums = ArrayList(readln().split(" ").map { it.toInt() })

    nums.sort()

    println(nums[k - 1])
}