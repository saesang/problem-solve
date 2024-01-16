fun main() {
    val sb = StringBuilder()
    val N = readln().toInt()
    val people = ArrayList<Pair<Int, Int>>()
    val rank = ArrayList<Int>()

    repeat(N) {
        val person = readln().split(" ").map { it.toInt() }
        people.add(Pair(person[0], person[1]))
    }

    for (i in 0..<N) {
        rank.add(1)
        for (j in 0..<N) {
            if (people[i].first < people[j].first && people[i].second < people[j].second) rank[i]++
        }
    }

    rank.forEach { sb.append("$it ") }

    print(sb)
}