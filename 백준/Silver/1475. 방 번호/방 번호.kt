fun main() {
    val n = readln()
    val arr = Array(10) { 0 }

    var mx = 0
    for (c in n) {
        val num = c.digitToInt()

        arr[num]++
        mx = if (num == 6 || num == 9) {
            if ((arr[6] + arr[9]) % 2 == 1) {
                if ((arr[6] + arr[9]) / 2 + 1 <= mx) mx else (arr[6] + arr[9]) / 2 + 1
            } else {
                if ((arr[6] + arr[9]) / 2 <= mx) mx else (arr[6] + arr[9]) / 2
            }
        } else {
            if (arr[num] <= mx) mx else arr[num]
        }
    }

    println(mx)
}