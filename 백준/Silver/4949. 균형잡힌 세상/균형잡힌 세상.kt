fun main() {
    while (true) {
        var str = readln()
        var bracketSt = ArrayDeque<Char>()
        var isBalanced = true

        if (str == ".") break
        
        for (c in str) {
            when (c) {
                '[' -> bracketSt.addLast('[')
                '(' -> bracketSt.addLast('(')
                ']' -> if (!bracketSt.isEmpty() && bracketSt.last() == '[') {
                    bracketSt.removeLast()
                } else {
                    isBalanced = false
                    break
                }
                ')' -> if (!bracketSt.isEmpty() && bracketSt.last() == '(') {
                    bracketSt.removeLast()
                } else {
                    isBalanced = false
                    break
                }
            }
        }

        if (!bracketSt.isEmpty()) isBalanced = false

        println(if (isBalanced) "yes" else "no")
    }
}