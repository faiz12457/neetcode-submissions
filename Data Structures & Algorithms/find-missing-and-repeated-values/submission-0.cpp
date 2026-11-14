class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>arr;
        unordered_map <int,int> mp;

        for(int i=0;i<grid.size();i++){
            for(int num: grid[i]){
                mp[num]++;
            }
        }

        for(auto m:mp){
            if(m.second==2) arr.push_back(m.first);
        }

        for(int i=1;i<=grid.size()*grid.size();i++){
                  if(!mp.count(i)) arr.push_back(i);

        }
        return arr;
    }
};