class Solution {
public:
    string frequencySort(string s) {
        vector<int>arr(127,0);

        vector<pair<int,int>>vec;


        for(auto a :s){
            arr[static_cast<int>(a)]++;
        }

        string ans="";

        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                vec.push_back({arr[i],i});
            }
        } 

        // 
        for(auto &a:vec){
            cout<<a.first<<" "<<(char)(a.second)<<endl;
        }
        
        sort(vec.begin(),vec.end());

        for(auto &a:vec){
            for(int i=0;i<a.first;i++){
                ans+=(char)a.second;
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;


    }
};