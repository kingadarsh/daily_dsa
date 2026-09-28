#include<stack>

class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        
        int cnt=0,maxCnt=0;

        for(auto a:s){
            if(!st.empty() and a==')'){
                maxCnt=max(maxCnt,cnt);
                while(st.top()!='(')st.pop();
                st.pop();
                cnt--;
            }
            st.push(a);
            if(st.top()=='(')cnt++;
            

        }

        cout<<maxCnt<<endl;
        return maxCnt;
    }
};