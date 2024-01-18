fun main() {
    val str = readln()
    val strLength = str.length
    val alphabet = Array(26) { 0 }
    val front = StringBuilder()
    val middle = StringBuilder()
    val back = StringBuilder()

    str.forEach { alphabet[it.code - 65]++ }

    if (strLength % 2 == 0) {
        for (idx in alphabet.indices) {
            if (alphabet[idx] % 2 != 0) {
                println("I'm Sorry Hansoo")
                return
            } else {
                repeat(alphabet[idx] / 2) {
                    front.append((idx + 65).toChar())
                    back.append((idx + 65).toChar())
                }
            }
        }
    } else {
        for (idx in alphabet.indices) {
            if (alphabet[idx] % 2 != 0) {
                if (middle.isEmpty()) {
                    middle.append((idx + 65).toChar())
                    repeat(alphabet[idx] / 2) {
                        front.append((idx + 65).toChar())
                        back.append((idx + 65).toChar())
                    }
                } else {
                    println("I'm Sorry Hansoo")
                    return
                }
            } else {
                repeat(alphabet[idx] / 2) {
                    front.append((idx + 65).toChar())
                    back.append((idx + 65).toChar())
                }
            }
        }
    }

    println(front.append(middle).append(back.reverse()))
}