import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;

        int N = nums.length;
        Arrays.sort(nums);
        ArrayList<Integer> poketmons = new ArrayList<>();
        poketmons.add(nums[0]);
        for(int i =1;i<N;i++) {
            if(nums[i]==nums[i-1]) {
                continue;
            }
            else {
                poketmons.add(nums[i]);    
            }
        }
        if (poketmons.size()>N/2) {
            answer = N/2;
        }
        else {
            answer = poketmons.size();
        }
        
        return answer;
    }
}