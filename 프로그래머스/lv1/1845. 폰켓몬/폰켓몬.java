import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        int N = nums.length;
        
        HashMap<Integer, Integer> pokets = new HashMap<>();
        for (int k:nums) {
            pokets.put(k,1);
        }
        if(pokets.size()>N/2) {
            answer = N/2;
        }
        else {
            answer = pokets.size();
        }
        
        return answer;
    }
}