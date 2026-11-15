class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        vector<string>arr;
        unordered_map <string,char> rev;
            string word="";
        for(char c: s){
            if(c==' '){
            arr.push_back(word);
            word="";
            continue;
            }
            else{
                  word+=c;
            }
            
        }
         arr.push_back(word);
if(pattern.size() != arr.size()) return false;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=arr[i]){
                    return false;
                }
            }

               if(rev.find(arr[i])!=rev.end()){
                if(rev[arr[i]]!=pattern[i]) return false;
            }


            mp[pattern[i]]=arr[i];
             rev[arr[i]]=pattern[i];
        }

       

     

return true;


        
    }
};