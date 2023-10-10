fun main() {
    val t = readln().toInt()

    for (i in 1..t) {
        var str = readln()
        var leftStack = ArrayDeque<Char>()  // 커서 기준 왼쪽 문자열
        var rightStack = ArrayDeque<Char>() // 커서 기준 오른쪽 문자열
        var pwd = StringBuilder()    // 시간초과 방지하기 위한 최종 출력 문자열

        // 주어진 입력 조건에 맞춰 stack에 str 담기
        for (c in str) {
            when (c) {
                '<' -> if (leftStack.size != 0)
                {
                    rightStack.addFirst(leftStack.last())
                    leftStack.removeLast()
                }
                '>' -> if (rightStack.size != 0)
                {
                    leftStack.addLast(rightStack.first())
                    rightStack.removeFirst()
                }
                '-' -> if (leftStack.size != 0)
                {
                    leftStack.removeLast()
                }
                else -> leftStack.addLast(c)
            }
        }

        // stack 내의 문자열을 그대로 출력하면 시간 초과가 난다. 따라서 StringBuilder에 넣어줘야 함!
        // 왼쪽 문자열을 pwd에 담기
        while (leftStack.size > 0) {
            pwd.append(leftStack.first())
            leftStack.removeFirst()
        }
        // 오른쪽 문자열을 pwd에 이어 담기
        while (rightStack.size > 0) {
            pwd.append(rightStack.first())
            rightStack.removeFirst()
        }

        println(pwd.toString())
    }
}