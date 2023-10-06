fun main() {
    val N = readln().toInt()

    for (i in 1..N) {
        var strings = readln().split(" ")
        var alphabets = Array(26) {0}
        var isPossible = true

        for (j in strings[0]) {
            alphabets[j.code - 'a'.code]++
        }
        for (j in strings[1]) {
            alphabets[j.code - 'a'.code]--
        }

        for (i in alphabets) {
            if (i != 0) {
                isPossible = false
                break
            }
        }

        if (isPossible) {
            println("Possible")
        } else {
            println("Impossible")
        }
    }
}