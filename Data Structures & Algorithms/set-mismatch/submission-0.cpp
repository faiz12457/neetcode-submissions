class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
                   unordered_map <int ,int> mp;
                   vector<int> arr;
                   int missing;
                   int dup;
                   for(int num: nums){
                    mp[num]++;
                   }


                   for(int i=1;i<=nums.size();i++){
                    if(mp[i]==2){
                      dup=i;
                    }
                    if(mp[i]==0){
                           missing=i;
                    }
                   }

                   arr.push_back(dup);
                   arr.push_back(missing);

return arr;
    }
};