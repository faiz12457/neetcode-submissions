class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map <char,int> mp;

        for(string s:words){
            for(char c: s){
                mp[c]++;
            }
        }

        for(auto m: mp){
            if(m.second%words.size()!=0){
                return false;
            }
        }

        return true;
    }
};