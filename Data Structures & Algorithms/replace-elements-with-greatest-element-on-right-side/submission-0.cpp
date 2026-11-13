class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> a(arr.size());

            int maxVal=arr[arr.size()-1];
        for(int i=arr.size()-1;i>=0;i--){
            a[i]=-1;
            if(i!=arr.size()-1){
                a[i]=maxVal;
                maxVal=max(arr[i],maxVal);
            }
            
        }


      
        return a;
    }
};