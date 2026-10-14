

class Solution {
    
  int recu(int n,int& ans){
    if(n==1){
        // cout<<ans;
        return 1;
    }     
    ans*=n;
    recu(n-1,ans);
  }

  public:
    int factorial(int n) {
        // code here
        
        if(n<=1) return 1;
        int ans=1;
        recu (n,ans);
        return ans;
        
    }
};