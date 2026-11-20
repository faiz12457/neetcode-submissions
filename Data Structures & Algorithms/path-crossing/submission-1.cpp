class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        unordered_set<string> st;
        st.insert("0,0");
        for(char p: path){
            if(p=='N') y++;
            if(p=='S')  y--;
            if(p=='E') x++;
            if(p=='W') x--;

              string pos = to_string(x) + "," + to_string(y);
              if(st.count(pos)) return true;

              st.insert(pos);
            
        }
        return false;
    }

  
};