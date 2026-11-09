class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> stringOne;
         unordered_map<char,int> stringTwo;

            bool sameSize=s.size()==t.size();
            if(!sameSize) return false;
          
                for(int i=0;i<s.size();i++){
                stringOne[s[i]]++;
                stringTwo[t[i]]++;
                }

                for(char n: s){
                    if(stringOne[n]!=stringTwo[n]){
                        return false;
                    }
                }
                return true;
            
            
              
            

        
    }
};
