class Solution {
public:
    int solve(int target,vector<int>& arr,int i,vector<vector<int>>& dp){
        if(i==arr.size()-1){
            if(target%arr[i]==0){
                return target/arr[i];
            }
            return 1e9;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int take=1e9;
        if(arr[i]<=target){
            take=1+solve(target-arr[i],arr,i,dp);
        }
        int nottake = solve(target,arr,i+1,dp);
        return dp[i][target]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int ans=solve(amount,coins,0,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};