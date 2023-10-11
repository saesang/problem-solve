fun main() {
    val str = readln()
    val M = readln().toInt()
    var leftStack = ArrayDeque<Char>()  // 커서 기준 왼쪽 문자열
    var rightStack = ArrayDeque<Char>() // 커서 기준 오른쪽 문자열
    val result = StringBuilder()    // 출력 문자열

    // leftStack에 str 저장
    for (s in str) {
        leftStack.addLast(s)
    }

    // 명령어 입력받아서 문자열 편집
    repeat(M) {
        var command = readln().split(" ")

        when (command[0]) {
            "L" -> if (!leftStack.isEmpty()) rightStack.addFirst(leftStack.removeLast())
            "D" -> if (!rightStack.isEmpty()) leftStack.addLast(rightStack.removeFirst())
            "B" -> if (!leftStack.isEmpty()) leftStack.removeLast()
            "P" -> leftStack.addLast(command[1].first())
        }
    }

    // result에 출력 문자열 저장
    while (!leftStack.isEmpty()) {
        result.append(leftStack.removeFirst())
    }
    while (!rightStack.isEmpty()) {
        result.append(rightStack.removeFirst())
    }

    println(result)
}