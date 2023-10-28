fun main() {
    var N = readln().toInt()
    var wList = ArrayList<Int>()
    var mx = 0

    repeat(N) {
        var w = readln().toInt()
        wList.add(w)
    }
    wList.sort()

    for (w in wList) {
        mx = if (mx > w * N) mx else w * N
        N--
    }

    println(mx)
}