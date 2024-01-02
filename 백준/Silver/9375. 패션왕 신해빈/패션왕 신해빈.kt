fun main() {
    val T = readln().toInt()

    repeat(T) {
        val n = readln().toInt()
        val hash = HashMap<String, Int>()

        repeat(n) {
            val category = readln().split(" ")[1]

            hash[category] = if (!hash.contains(category))  1 else hash[category]!! + 1
        }

        var ans = 1
        hash.values.forEach { ans *= (it + 1) }
        
        println(ans - 1)

    }
}