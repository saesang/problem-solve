import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        int answer = 0;
        int n = scoville.length;
        PriorityQueue<Integer> PQ = new PriorityQueue<>();
        
        for (int i=0; i<n; i++) {
            PQ.add(scoville[i]);
        }
        
        int cnt = 0;
        while (true) {
            if (PQ.size() > 1) {
                if (PQ.peek() >= K) {
                    break;
                }
                int tmp1 = PQ.poll();
                int tmp2 = PQ.poll();
                int newFood = tmp1 + ( tmp2 * 2 );
                PQ.add(newFood);
                cnt++;                
                
            } else if (PQ.size() == 1) {
                if(PQ.peek() < K) {
                    cnt = -1;
                }
                break;      
            } else {
                cnt = -1;
                break;
            }
        }
        
        answer = cnt;
        
        return answer;
    }
}