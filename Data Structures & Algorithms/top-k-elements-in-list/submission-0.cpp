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
            s.push_back({p.first,p.second});;
        } 

        sort(s.begin(), s.end(), [](pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
});

for(int i=0;i<k;i++){
    arr.push_back(s[i].first);
}

          
        
return arr;
        
    }
};
