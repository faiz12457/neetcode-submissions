class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
                   unordered_map <int,int> mp;
                   vector<int> arr;
                   vector<pair<int,int>> s;
        for (int num : nums){
               mp[num]++;   
        }

        for (auto p:mp){
            s.push_back({p.second,p.first});;
        } 

        sort(s.rbegin(), s.rend());

for(int i=0;i<k;i++){
    arr.push_back(s[i].second);
}

          
        
return arr;
        
    }
};
