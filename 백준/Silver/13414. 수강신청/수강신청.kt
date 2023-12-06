fun main() {
    val (K,L) = readln().split(" ").map{ it.toInt() }
    val waitSet = LinkedHashSet<String>()  // 순서가 있는 HashSet
    val result = StringBuilder()

    repeat(L) {
        val input = readln()
        waitSet.remove(input)   // waitSet에 input값 이미 존재하면 제거
        waitSet.add(input)  // 새 input값 추가
    }

    var setIdx = 0
    waitSet.forEach {
        result.append("$it\n")
        // waitSet 요소 result에 K개 까지 더하고 출력
        setIdx++
        if (setIdx >= K) return println(result)
    }

    println(result)
}