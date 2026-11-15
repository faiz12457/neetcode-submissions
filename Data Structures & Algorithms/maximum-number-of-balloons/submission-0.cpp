class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char,int> mp;
        unordered_map<char,int> b;
         int minVal=INT_MAX;
        string s="balloon";
        for(char c:s){
            b[c]++;
        }


        for(char c: text){
            mp[c]++;
        }


        for(auto n:b){
            int d=mp[n.first]/b[n.first];
            minVal=min(minVal,d);
                 
        }

        return minVal;


        

        
        



        
    }
};