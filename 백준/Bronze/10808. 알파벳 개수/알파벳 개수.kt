fun main() {
    val s = readln()
    var alphabets = Array(26) {0}

    for (i in s.indices) {
        alphabets[s[i].toInt() - 97]++
    }

    for (i in alphabets.indices) {
        print("${alphabets[i]} ")
    }
}