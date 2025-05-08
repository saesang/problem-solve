class Solution {
    /*
    1 1 0
    1 1 0
    0 0 1
    
    2차원 배열 완전 탐색하면서 네트워크 개수 +하기
    -> 그림 개수 새는 거!!!
    */

    val visit = Array(210) {false}
    
    fun solution(n: Int, computers: Array<IntArray>): Int {
        var answer = 0
        
        for (i in 0 until n) {
            if (visit[i]) continue
            
            val q = ArrayDeque<Int>()
            q.addLast(i)
            answer++
            visit[i] = true
            
            while(q.isNotEmpty()) {
                val tmp = q.removeLast()
                
                for (j in 0 until n) {
                    if (computers[tmp][j] == 0 || visit[j]) continue
                    
                    q.addLast(j)
                    visit[j] = true
                }
            }
        }
        
        return answer
    }
}