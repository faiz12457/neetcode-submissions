class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        unordered_set<string> st;
        st.insert("0,0");
        for(char p: path){
            if(p=='N'){
                y++;
                string pos = to_string(x) + "," + to_string(y);
                if(st.count(pos)) return true;

                st.insert(pos);
            }
            if(p=='S'){
                y--;
                string pos = to_string(x) + "," + to_string(y);
                if(st.count(pos)) return true;

                    st.insert(pos);
            }

            if(p=='E'){
                x++;
                string pos = to_string(x) + "," + to_string(y);
                if(st.count(pos)) return true;

                    st.insert(pos);
            }

            if(p=='W'){
                x--;
                string pos = to_string(x) + "," + to_string(y);
                if(st.count(pos)) return true;

                    st.insert(pos);
            }
        }
        return false;
    }

  
};