class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
           unordered_set<string> st;
        for (string e: emails){
            string unique="";
            int pos=e.find('@');
            string local=e.substr(0,pos);
            string domain=e.substr(pos);   
               for(char l: local){
                if(l=='+') break;
                if(l=='.') continue;
                unique+=l;
               }
          unique+=domain;
          st.insert(unique);
          

        }

       return  st.size();
        
    }
};