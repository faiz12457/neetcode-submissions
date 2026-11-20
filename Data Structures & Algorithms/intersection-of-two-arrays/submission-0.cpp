class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> st;
          vector<int>arr;
     
        for(int num: nums1){
            st.insert(num);
        }

        for(int num: nums2){
            if(st.count(num)){
                arr.push_back(num);
                st.erase(num);
            }
        }

        

        return arr;
    }
};