fun main() {
    val N = readln().toInt()
    var m = mutableMapOf<Long, Int>()
    var key: Long = 0 // 가장 많이 가지고 있는 정수 중 최솟값
    var mx = 0

    repeat(N) {
        var k = readln().toLong()
        if (m.contains(k)) m[k] = m[k]!! + 1 else m[k] = 1
        if (m[k]!! > mx) {
            mx = m[k]!!
            key = k
        } else if (m[k] == mx) {
            key = if (k >= key) key else k
        }
    }

    println(key)
}