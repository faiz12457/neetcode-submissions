class Solution {
public:
    int majorityElement(vector<int>& nums) {
      
          int n= nums.size()/2;
        unordered_map <int,int> mp;
        
        for(int num: nums){
            mp[num]++;
        }


        for(auto m: mp){
            if(m.second>n){
               return m.first;
            }
          
        }

          

    }
};