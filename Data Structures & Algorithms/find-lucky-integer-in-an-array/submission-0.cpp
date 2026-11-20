class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map <int ,int> mp;
 
        int lucky=-1;
         for(int num: arr){
                 mp[num]++;
                 
        }

            for(auto m: mp){
                if(m.first==m.second) lucky=max(lucky,m.second);
            }

            return lucky;


    }
};