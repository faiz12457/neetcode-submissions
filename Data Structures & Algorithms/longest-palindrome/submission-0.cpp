class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> mp;
int count=0;
bool hasOdd=false;
        for(char c:s){
            mp[c]++;
        }

        for(auto m:mp){
            if(m.second%2==0){
                count+=m.second;
       
            }
            else{
               
                   count+=m.second-1;
                  hasOdd=true;
                
            }


        }

        if(hasOdd) count=count+1;
        return count;
        
    }
};