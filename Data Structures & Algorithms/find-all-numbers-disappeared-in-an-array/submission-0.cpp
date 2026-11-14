class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s;
       
        vector<int> arr;

        for(int num: nums){
            s.insert(num); 
        } 

        for(int i=1;i<=nums.size();i++){
            if(!s.count(i)){
                     arr.push_back(i);
            }
        }

        return arr;
        
    }
};