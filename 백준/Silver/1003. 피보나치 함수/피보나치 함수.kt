fun main() {
    val t = readln().toInt()
    val sb = StringBuilder()

    repeat(t) {
        val n = readln().toInt()

        sb.append("${fibonacci(n - 1)} ${fibonacci(n)}").append('\n')

    }
    print(sb)
}

fun fibonacci(n: Int):Int {
    when (n) {
        0 -> {
            return 0
        }
        1 -> {
            return 1
        }
        else -> {
            var n1 = 0
            var n2 = 1
            var tmp = 0
            //
            for(i in 2 .. n){
                tmp = n1
                n1 = n2
                n2 += tmp
            }
            return n2
        }
    }
}