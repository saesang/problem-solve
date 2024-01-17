fun main() {
    val str = readln()
    val check = readln()
    var cnt = 0

    var idx = 0
    val checkLength = check.length
    while (idx + checkLength <= str.length) {
        if (str.substring(idx, idx + checkLength) == check) {
            cnt++
            idx += checkLength
        } else idx++
    }

    println(cnt)
}