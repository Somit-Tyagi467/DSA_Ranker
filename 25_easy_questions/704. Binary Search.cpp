class Solution {
public:
    int solve(vector<int>& arr,int target,int low,int high){
        int mid=low+(high-low)/2;
        if(low>high) return -1;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            return solve(arr,target,mid+1,high);
        }
        else{
        return solve(arr,target,low,mid-1);
        }
    }
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        return solve(nums,target,0,high);
        
    }
};