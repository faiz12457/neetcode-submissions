class Solution {
public:

    string encode(vector<string>& strs) {
        string e="";
        for(string s: strs){
                e+=to_string(s.size())+"#"+s;
        }

        return e;

    }

    vector<string> decode(string s) {
                int i=0;
                vector<string> words;
                

                string number="";
               while(i<s.size()){
                if(s[i]!='#'){
                    number+=s[i];
                    i++;
                }
                else{
                    string w="";
                    int num=stoi(number);
                    for(int k=i+1;k<=num+i;k++){
                          w+=s[k];
                    }
                    words.push_back(w);
                    i=i+1+num;
                    number="";
                }
               }
      
return words;
    }
};
