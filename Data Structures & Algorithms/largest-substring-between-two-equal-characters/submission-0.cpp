class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
int maxLength=-1;
unordered_map <char,int> mp;
        for(int i=0;i<s.size();i++ ){
                 if(!mp.count(s[i])){
                    mp[s[i]]=i;
                 }
                 else{
                       int length=i-mp[s[i]]-1;
                        maxLength=max(maxLength,length);
                 }
        }

        return maxLength;
        
    }
};