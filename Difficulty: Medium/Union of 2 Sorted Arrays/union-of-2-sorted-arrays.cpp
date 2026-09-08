class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        vector<int>ans;
        
        int i=0,j=0;
        
        while(i<n and j<m){
            if(i<n and j<m and a[i]==b[j]){
                if(ans.empty() or ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                i++;
                j++;
            }
            else if(i<n and j<m and a[i]<b[j]){
                if(ans.empty() or ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }
            else if(i<n and j<m and a[i]>b[j]){
                if(ans.empty() or ans.back()!=b[j]){
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n){
            if(ans.empty() or ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<m){
            if(ans.empty() or ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        
        
        return ans;
    }
};