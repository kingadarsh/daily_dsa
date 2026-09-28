class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, maxCnt=0;

        for(auto a:s){
            if(a=='('){
                cnt++;
                maxCnt=max(cnt,maxCnt);
            }

            if(a==')'){
                cnt--;
            }
        }

        return maxCnt;


        
    }
};