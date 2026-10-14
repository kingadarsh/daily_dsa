void recu(vector<char> &s, int i){
    if(i>=(s.size()/2)){
        return ;
    }

    swap(s[i],s[s.size()-i-1]);
    return recu(s,i+1);

}
class Solution {
public:
    void reverseString(vector<char>& s) {

    return recu(s,0);
        // return s;
    }
};