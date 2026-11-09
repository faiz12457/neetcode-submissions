class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        unordered_map<int,int>mp;
     
           for(int i=0;i<nums.size();i++){
            int remain=target-nums[i];
            if(mp.find(remain)!=mp.end()){
                arr.push_back(mp[remain]);
                arr.push_back(i);
                return arr;
            }
            mp[nums[i]]=i;
            
        }
        return arr;
    }
    
};
