import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        int n = arr.length;
        Queue<Integer> q = new LinkedList<>();
        
        for (int i=0; i<n; i++) {
            q.add(arr[i]);
        }
        
        for (int i=0; i<n-1; i++) {
            int temp = q.poll();
            if (temp != q.peek()) {
                q.add(temp);
            }
        }
        q.add(q.poll());
        
        int qSize = q.size();
        int[] answer = new int[qSize];
        
        for (int i=0; i<qSize; i++) {
            answer[i] = q.poll();
        }

        return answer;
    }
}