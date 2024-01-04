fun main() {
    val S = readln()
    val hash = HashMap<String, Boolean>() // {"a" to true} 형식: key의 개수가 중요하므로, value 값은 아무거나 넣었다.

    for (start in 0..S.length) {
        for (end in start + 1 .. S.length) {
            val str = S.substring(start,end)
            hash[str] = true
        }
    }
    println(hash.size)
}