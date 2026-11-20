class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map <string,string> mp;
         string output="";
        for(int i=0;i<paths.size();i++){
                mp[paths[i][0]]=paths[i][1];
    
        }

        for(auto m: mp){
            if (!mp.count(m.second)){
                output=m.second;
            }
        }

        



        return output;


    }
};
