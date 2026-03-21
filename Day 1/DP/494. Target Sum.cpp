class Solution {
public:
    int solve(int sum,vector<int>& arr,int i,vector<vector<int>>& dp){
        if(i==arr.size()){
            if(sum==0) return 1;
            return 0;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];
        int take=0;
        if(sum>=arr[i]){
            take=solve(sum-arr[i],arr,i+1,dp);
        }
        int nottake=0;
        nottake=solve(sum,arr,i+1,dp);
        return dp[i][sum] = take+nottake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int T_sum=0;
        for(int &num:nums){
            T_sum+=num;
        }
        if(abs(target)>T_sum) return 0;
        if((T_sum+target)%2!=0) return 0;
        int sum1 = (T_sum+target)/2;

        vector<vector<int>> dp(nums.size(),vector<int>(sum1+1,-1));
        return solve(sum1,nums,0,dp);
    }
};
//revision
class Solution {
public:
    int solve(int sum,vector<int>& arr,int i,vector<vector<int>>& dp){
        if(i==arr.size()){
            if(sum==0) return 1;
            return 0;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];
        int take=0;
        if(sum>=arr[i]){
            take=solve(sum-arr[i],arr,i+1,dp);
        }
        int nottake=0;
        nottake=solve(sum,arr,i+1,dp);
        return dp[i][sum] = take+nottake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int T_sum=0;
        for(int &num:nums){
            T_sum+=num;
        }
        if(abs(target)>T_sum) return 0;
        if((T_sum+target)%2!=0) return 0;
        int sum1 = (T_sum+target)/2;

        vector<vector<int>> dp(nums.size(),vector<int>(sum1+1,-1));
        return solve(sum1,nums,0,dp);
    }
};