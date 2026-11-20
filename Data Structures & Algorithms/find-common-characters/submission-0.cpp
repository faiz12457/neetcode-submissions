class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> mp;
        vector<string> arr;
        for(char c: words[0]){
            mp[c]++;
        }


        for(int i=1;i<words.size();i++){
            unordered_map <char,int> temp;
             for(char c : words[i]){
                 temp[c]++;
                }

                   for(auto m :mp){
                        mp[m.first]=min(m.second,temp[m.first]);
                     
                }
            
 
                    
            }

            for(auto m : mp){
    for(int i = 0; i < m.second; i++){
        arr.push_back(string(1, m.first));
    }
}

        
return arr;
        }

    
};