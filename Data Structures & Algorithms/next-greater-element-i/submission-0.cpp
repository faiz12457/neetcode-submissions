class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> n;
        vector<int> arr;

        for(int i=0;i<nums2.size();i++){
            int greater=-1;
            int count=i+1;  
          
            while(count<nums2.size()){
                  if(nums2[count]>nums2[i]){
                    greater=nums2[count];
                    break;
                  }
                  count++;
            }
              
             n[nums2[i]]=greater;

          
            
        }

        for(int m:nums1){
            arr.push_back(n[m]);
        }

        return arr;
        
    }
};