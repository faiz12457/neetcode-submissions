class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            
            vector<int> prefix(nums.size(),1);
            vector<int> suffix(nums.size(),1);
            vector<int> arr;
            suffix[nums.size()-1]=nums[nums.size()-1];
            prefix[0]=nums[0];
            for(int i=1;i<nums.size();i++){
                prefix[i]=prefix[i-1]*nums[i];
               }

          for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
          }

          for(int i=0;i<nums.size();i++){
          int left=  (i==0)? 1:prefix[i-1]; 
          int right=(i==nums.size()-1)?1 : suffix[i+1];
          arr.push_back(left*right);
                   }
              
           
            return arr;

           
    }
};
