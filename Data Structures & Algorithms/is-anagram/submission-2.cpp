class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
       

            bool sameSize=s.size()==t.size();
            if(!sameSize) return false;
          
                for(int i=0;i<s.size();i++){
                map[s[i]]++;
                map[t[i]]--;
                }

                for(auto m : map){
                    if(m.second!=0){
                        return false;
                    }
                }
                return true;
            
            
              
            

        
    }
};
