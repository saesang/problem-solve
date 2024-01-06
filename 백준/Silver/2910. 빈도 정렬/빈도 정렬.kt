fun main() {
    val (N, C) = readln().split(" ").map { it.toInt() }
    val nums: List<String> = readln().split(" ")
    val freqHash = LinkedHashMap<String, Int>()

    nums.forEach {
        if (freqHash.containsKey(it)) freqHash[it] = freqHash[it]!! + 1 else freqHash[it] = 1
    }

    // 정렬하기 위해 리스트로 바꿨다가 다시 map으로 바꿈
    val freqMap = freqHash.toList().sortedByDescending { it.second }.toMap()

    freqMap.forEach { map ->
        repeat(map.value) {
            print("${map.key} ")
        }
    }
}