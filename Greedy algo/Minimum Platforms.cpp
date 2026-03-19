class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int count=0;
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>dep[j]){
                j++;
            }
            else{
                count++;
            }
        }
        return count;
    }
};
