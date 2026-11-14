class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        string output="";
        vector<string> a;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]!=1)continue;
                  a.push_back(arr[i]);
        }
        

            if(a.size()<k)  return output="";

             return  output=a[k-1];
            
        



        
    }
};