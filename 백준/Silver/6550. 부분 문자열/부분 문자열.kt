fun main() {
    while (true) {
        val (s,t) = readlnOrNull()?.split(" ") ?: break

        var tIdx = 0
        var length = 0
        for (c in s) {
            while(tIdx < t.length) {
                if (c == t[tIdx]) {
                    length++
                    tIdx++
                    break
                } else tIdx++
            }
        }

        println(if (length == s.length) "Yes" else "No")
    }
}