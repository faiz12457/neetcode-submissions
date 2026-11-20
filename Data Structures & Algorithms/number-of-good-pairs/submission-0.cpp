class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map <int,int> mp;

        for(int num: nums){
            if(!mp.count(num)){
                mp[num]++;
            }
            else{
                count+=mp[num];
                mp[num]++;
            }
        }

     return count;
    }
};