class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        while(j<nums.size()){
            int temp=nums[j-1];
            nums[j-1]=nums[j];
            nums[j]=temp;
            j+=2;
        }
        return nums;
    }
};

// use vector for better approach instead manipulating data in place.