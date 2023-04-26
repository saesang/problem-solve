import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int n = array.length;
        int t = commands.length;
        int N = commands[0].length;
        int[] answer = new int[t];
        
        for (int i=0; i<t; i++) {
            int size = commands[i][1] - commands[i][0] + 1;
            int[] temp = new int[size];
            
            for (int j=0; j<size; j++) {
                temp[j] = array[commands[i][0] - 1 + j];
            }
            
            Arrays.sort(temp);
            answer[i] = temp[commands[i][2] - 1];
        }
                
        return answer;
    }
}