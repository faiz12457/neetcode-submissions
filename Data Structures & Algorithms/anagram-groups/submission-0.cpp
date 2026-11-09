class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> values;   
     

        for (int i=0;i<strs.size();i++){
                vector<int> count(26,0);
                string key="";
                for(char c: strs[i]){
                    count[c- 'a']++;

                }

                for (int v: count){
                    key+=to_string(v)+"#";
                }
                mp[key].push_back(strs[i]);


        }
       
       for(auto m: mp){
        values.push_back(m.second);
       }
     

return values;

        
        
    }
};
