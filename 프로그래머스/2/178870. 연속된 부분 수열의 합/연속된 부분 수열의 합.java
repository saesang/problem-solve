class Solution {
    public int[] solution(int[] sequence, int k) {
        int[] answer = {};
        
        int minLeng = 1000001;
        int sz = sequence.length;
        
        int st = 0;
        int en = 0;
        int num = sequence[0];
        
        int tmpSt = 0;
        int tmpEn = 0;
        
        while (en < sz) {
            if (num == k) {
                int tmpLeng = en-st+1;
                
                if (tmpLeng < minLeng) {
                    minLeng = tmpLeng;
                    tmpSt = st;
                    tmpEn = en;
                }
                
                en++;
                if (en < sz) {
                    num += sequence[en];
                }
                num -= sequence[st];
                st++;
            } else if (num < k) {
                en++;
                if (en < sz) {
                    num += sequence[en];
                }
            } else {
                num -= sequence[st];
                st++;
            }
        };
        
        answer = new int[2];
        answer[0] = tmpSt;
        answer[1] = tmpEn;
        
        return answer;
    }
}