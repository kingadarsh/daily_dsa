
bool recu(const int &n, int i){
    if(i>=static_cast<int>(n/2)){
        
        return true;
    }
    
    if((n%i==0)){
        return false;
    }
    
    return recu(n,i+1);
}

class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n<=1)return false;
        return recu(n,2);
    }
};
