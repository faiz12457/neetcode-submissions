class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
         vector <int> arr;
        for(char c: s){
            mp[c]++;
        }

       
         int maxOdd=INT_MIN;
       int minEven = INT_MAX;;
          for(auto m: mp){
            if(m.second%2==0){
             minEven=m.second<minEven?m.second: minEven;
            }
            else{
               maxOdd = m.second > maxOdd ? m.second : maxOdd;
            }
              
          }

      

          return (maxOdd-minEven);

    }
};