class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int,int> mp;
        vector<pair<int,int>> arr;
        vector<int> output;
        for(int num: nums){
            mp[num]++;
        }


            for(auto m:mp){
                arr.push_back({m.second,m.first});
            }

            sort(arr.begin(), arr.end(), [](pair<int,int> a, pair<int,int> b) {

            if(a.first != b.first) {
                return a.first < b.first;
            }

            return a.second > b.second;
        });


            for(int i=0;i<arr.size();i++){
                for(int j=0;j<arr[i].first;j++){
               output.push_back(arr[i].second);

                }
            }

            return output;
        

    }
};