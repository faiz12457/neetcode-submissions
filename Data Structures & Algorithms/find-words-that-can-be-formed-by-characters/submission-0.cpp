class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map <char,int>mp;
        int count=0;
       
        for(char c:chars){
            mp[c]++;
        }

        for(int i=0;i<words.size();i++){
             bool isValid=true;
            unordered_map <char,int> m;

            for(char c:words[i]){
                m[c]++;
            }

            for(auto n: m){
                if(n.second>mp[n.first]){
                    isValid=false;
                    break;
                };
              
            }

            if(isValid) count+=words[i].size();

        }

        return count;


        
    }
};