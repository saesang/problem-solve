fun main() {
    val K = readln().toInt()
    var numsStack = ArrayDeque<Int>()
    var result = 0

    // 입력받은 숫자를 numsStack에 입력
    repeat(K) {
        var num = readln().toInt()

        if (num != 0) {
            numsStack.addLast(num)
        } else {
            numsStack.removeLast()
        }
    }

    // numsStack에 남아있는 수 result에 모두 더하기
    for (num in numsStack) {
        result += num
    }

    println(result)
}