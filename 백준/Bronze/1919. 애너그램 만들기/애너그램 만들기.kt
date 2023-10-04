fun main() {
    val str1 = readln()
    val str2 = readln()
    var alphabets1 = Array(26) {0}
    var alphabets2 = Array(26) {0}
    var sum = 0

    for (i in str1) {
        alphabets1[i.code - 97]++
    }

    for (j in str2) {
        alphabets2[j.code - 97]++
    }

    for (i in 0..25) {
        if (alphabets1[i] - alphabets2[i] < 0) {
            sum += (alphabets1[i] - alphabets2[i]) * (-1)
        } else {
            sum += alphabets1[i] - alphabets2[i]
        }
    }

    println(sum)
}