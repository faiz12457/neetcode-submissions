class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st;
         int maxLength = 0;
for(int num: nums){
    st.insert(num);
}
         for (int i=0;i<nums.size();i++){
            int current=nums[i];
            int count=1;
            if(!st.count(current-1)){
                while(st.count(current+1)){
                    count++;
                    current++;
                }
            }
             maxLength=max(maxLength,count);
            if(maxLength==nums.size()) break;
         }
       
   return maxLength;
    
    }
};
