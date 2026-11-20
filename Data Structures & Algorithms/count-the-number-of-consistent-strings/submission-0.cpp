class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set <char> st;
          int count=0;
        for(char c: allowed){
            st.insert(c);
        }

        for(string w: words){
            bool found=true;
            for(char c: w){
                if(!st.count(c)){
                    found=false;
                    break;
                }
            }

            if(found) count++;
        }
        return count;
        
    }
};