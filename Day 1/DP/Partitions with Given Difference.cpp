class Solution {
  public:
    int solve(int sum,vector<int>& arr,int i,vector<vector<int>>& dp){
        if(i==arr.size()){
            if(sum==0) return 1;
            return 0;
        }
        if(dp[i][sum] != -1) return dp[i][sum];
        
        int take=0;  
        
        if(sum >= arr[i]){
            take = solve(sum-arr[i],arr,i+1,dp);
        }
        
        int nottake = solve(sum,arr,i+1,dp);
        
        return dp[i][sum] = take + nottake;
    }
    
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int T_sum=0;
        
        for(int &num:arr){
            T_sum+=num;
        }
        
        if(T_sum < diff) return 0;
        
        if((T_sum + diff) % 2 != 0) return 0;
        
        int sum1= (T_sum+diff)/2;
        vector<vector<int>> dp(arr.size(), vector<int>(sum1 + 1, -1));
        return solve(sum1,arr,0,dp);
        
    }
    
};