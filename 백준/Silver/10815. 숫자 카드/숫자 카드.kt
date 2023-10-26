fun main() {
    val N = readln().toInt()
    val sCards = readln().split(" ")
    val M = readln().toInt()
    val cards = readln().split(" ")

    val sMap = mutableMapOf<String,Boolean>()
    sCards.forEach { sMap[it] = true }  // sMap에 (상근이 카드, true)쌍 저장

    for (card in cards) {
        if (sMap.containsKey(card)) {
            print("1 ")
        } else {
            print("0 ")
        }
    }
}