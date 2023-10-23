fun main() {
    var N = readln().toInt()
    var cnt = 0

    repeat(N) {
        var word = readln()
        var st = ArrayDeque<Char>()

        for (c in word) {
            if (st.isEmpty()) {
                st.addLast(c)
            }else {
                if (c == st.last()) {
                    st.removeLast()
                } else {
                    st.addLast(c)
                }
            }
        }
        if (st.isEmpty()) cnt++
    }
    println(cnt)
}