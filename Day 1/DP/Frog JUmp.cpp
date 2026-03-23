class Solution {
  public:
    int solve(vector<int>& dp , int i, vector<int>& arr){
        
        if(i==arr.size()-1) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        int step1 = abs(arr[i+1]-arr[i]) + solve(dp,i+1,arr);
        
        int step2 = INT_MAX;
        
        if(i+2<arr.size()){
            
            step2= abs(arr[i+2]-arr[i]) + solve(dp,i+2,arr);
            
        }
        
        return dp[i]=min(step1,step2);
    }
    
    int minCost(vector<int>& height) {
        // Code here
        vector<int> dp(height.size()-1,-1);
        
        return solve(dp,0,height);
    }
};

//without dp
class Solution {
  public:
    int solve(int i, vector<int>& arr){
        
        if(i==arr.size()-1) return 0;
        
        int step1 = abs(arr[i+1]-arr[i]) + solve(i+1,arr);
        
        int step2 = INT_MAX;
        
        if(i+2<arr.size()){
            
            step2= abs(arr[i+2]-arr[i]) + solve(i+2,arr);
            
        }
        
        return min(step1,step2);
    }
    
    int minCost(vector<int>& height) {
        // Code here
        
        return solve(0,height);
    }
};