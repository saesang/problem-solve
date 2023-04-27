import java.util.*;

class Solution {
    public int solution(int[][] sizes) {
        int answer = 2000000;
        int wSize = sizes.length;
        int hSize = sizes[0].length;
        int wMax = 0; int hMax = 0;
        
        for (int i=0; i<wSize; i++) {
            int tmpW1 = wMax > sizes[i][0] ? wMax : sizes[i][0];
            int tmpH1 = hMax > sizes[i][1] ? hMax : sizes[i][1];
            
            int tmpW2 = wMax > sizes[i][1] ? wMax : sizes[i][1];
            int tmpH2 = hMax > sizes[i][0] ? hMax : sizes[i][0];
            
            if (tmpH1*tmpW1 > tmpH2*tmpW2) {
                wMax = tmpW2;
                hMax = tmpH2;
            } else {
                wMax = tmpW1;
                hMax = tmpH1;
            }
        }
        
        answer = wMax*hMax;
        
        return answer;
    }
}