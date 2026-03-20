// User function Template for C++

class Solution {
  public:
    int solve(int max_c , vector<int> &arr , int i , vector<vector<int>> &dp){
        
        if(i>=arr.size()) return 0;
        
        if(dp[i][max_c]!=-1) return dp[i][max_c];
        
        int take=0;
        if(i+1<=max_c){
            take=arr[i] + solve(max_c-(i+1),arr,i,dp);
        }
        
        int nottake = solve(max_c,arr,i+1,dp);
        
        int profit = max(take,nottake);
        
        return dp[i][max_c]=profit;
    }
    int cutRod(vector<int> &price) {
        // code here
        vector<vector<int>> dp(price.size(),vector<int>((price.size())+1,-1));
        int max_c = price.size() ;
        return solve(max_c,price,0,dp);
    }
};

//revision

class Solution {
  public:
    int solve(int max_c , vector<int> &arr , int i , vector<vector<int>> &dp){
        
        if(i>=arr.size()) return 0;
        
        if(dp[i][max_c]!=-1) return dp[i][max_c];
        
        int take=0;
        if(i+1<=max_c){
            take=arr[i] + solve(max_c-(i+1),arr,i,dp);
        }
        
        int nottake = solve(max_c,arr,i+1,dp);
        
        int profit = max(take,nottake);
        
        return dp[i][max_c]=profit;
    }
    int cutRod(vector<int> &price) {
        // code here
        vector<vector<int>> dp(price.size(),vector<int>((price.size())+1,-1));
        int max_c = price.size() ;
        return solve(max_c,price,0,dp);
    }
};