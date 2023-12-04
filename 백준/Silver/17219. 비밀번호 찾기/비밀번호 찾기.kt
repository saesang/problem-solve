fun main() {
    val (N, M) = readln().split(" ").map{ it.toInt() }
    val pwHash = HashMap<String, String>()
    var result = StringBuilder()

    repeat(N) {
        val (key, value) = readln().split(" ")
        pwHash[key] = value
    }

    repeat(M) {
        result.append("${pwHash[readln()]}\n")
    }

    println(result)
}