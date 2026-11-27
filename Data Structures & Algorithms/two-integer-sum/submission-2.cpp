class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

            vector<int> arr;
            unordered_map<int,int> mp;



            for(int i=0;i<nums.size();i++){
                int complement=target-nums[i];
                if(mp.count(complement)){
                    arr.push_back(mp[complement]);
                    arr.push_back(i);
                    return arr;
                }
            mp[nums[i]]=i;
            }

      
    }
    
};
