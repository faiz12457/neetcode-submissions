class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int num: nums){
           auto find=set.find(num);

            if(find!=set.end()){
                return true;
                break;
            }

        set.insert(num) ;

        }
        return false;
    }
};