class Solution {
public:
    void merge(vector<int>& arr, int n, vector<int>& brr, int m) {
        int s=arr.size();
        cout<<s<<" "<<n<<" "<<m<<endl;

        int i=n-1,j=m-1, k=s-1;

        while(i>=0 and j>=0){
            if(i >=0 and j>=0 and k>=0 and arr[i]==brr[j]){
                arr[k]=arr[i];
                i--;k--;
            }

            else if(i >=0 and j>=0 and k>=0 and arr[i]<brr[j]){
                arr[k--]=brr[j--];
            }
            else if(i >=0 and j>=0 and k>=0 and arr[i]>brr[j]){
                arr[k--]=arr[i--];
            }
        }

        while(j>=0){
            if(k>=0 and j>=0){
                arr[k--]=brr[j--];
            }
        }


        // return arr;
    }
};