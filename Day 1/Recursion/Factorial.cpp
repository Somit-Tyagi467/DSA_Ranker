class Solution {
  public:
    int solve(int num,vector<int>& dp){
        if(num == 1) return 1;
        if(dp[num]!= -1) return dp[num];
        
        return dp[num]=num*solve(num-1,dp);
    }
    
    int factorial(int n) {
        // code here
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};
//without dp
class Solution {
  public:
    int solve(int num){
        if(num == 1) return 1;
        return num*solve(num-1);
    }
    
    int factorial(int n) {
        // code here
        return solve(n);
    }
};