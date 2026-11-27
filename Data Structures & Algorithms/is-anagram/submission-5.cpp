class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map <char,int> s1;
       unordered_map<char,int> s2;

           if(s.size()!=t.size()) return false;
       for(char c: s){
        s1[c]++;
       }

       for(char c: t){
        s2[c]++;
       }


       for(char c: s){
        if(s1[c]!=s2[c]) return false;
       }

       return true;
            
            
              
            

        
    }
};
