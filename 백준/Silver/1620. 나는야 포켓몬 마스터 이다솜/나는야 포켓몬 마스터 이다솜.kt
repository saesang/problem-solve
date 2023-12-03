fun main() {
    val (N,M) = readln().split(" ").map{ it.toInt() }
    val pokemon = HashMap<String, String>()    // 해시맵 pokemon 선언

    // pokemon에 <순서, 포켓몬 이름>, <포켓몬 이름, 순서> 입력
    repeat(N) {
        val num = (it + 1).toString()
        val name = readln()
        pokemon[num] = name
        pokemon[name] = num
    }

    // 출력
    repeat(M) {
        val input = readln()
        println(pokemon[input])
    }
}