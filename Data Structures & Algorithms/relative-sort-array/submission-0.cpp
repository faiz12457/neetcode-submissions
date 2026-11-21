class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map <int ,int> mp;
        vector<int>arr;
        vector<int> unique;
        
    
        for(int n: arr1){
            mp[n]++;   
        }

    
        for(int n: arr2){
                for(int i=0;i<mp[n];i++){
                    arr.push_back(n);
                }
                mp[n]=0;
        }

        for(auto m: mp){
            if(m.second>0){
                for(int i=0;i<m.second;i++)  
                unique.push_back(m.first);
            }
            
        }

        sort(unique.begin(),unique.end());

       for(int n: unique){
        arr.push_back(n);
       }





        return arr;

       

        






        
    }
};