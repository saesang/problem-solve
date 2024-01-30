fun main() {
    val str = readln()
    var numStr = StringBuilder()
    var isAdd = true
    var result = 0

    for (idx in str.indices) {
        if (str[idx] == '-') {
            val num = numStr.toString().toInt()
            numStr.clear()

            if (isAdd) {
                result += num
                isAdd = false
            } else result -= num
        } else if (str[idx] == '+') {
            val num = numStr.toString().toInt()
            numStr.clear()

            if (isAdd) result += num else result -= num
        } else {
            numStr.append(str[idx])
            if (idx == str.lastIndex) {
                val num = numStr.toString().toInt()
                numStr.clear()

                if (isAdd) result += num else result -= num
            }
        }
    }

    println(result)
}