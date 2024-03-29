class Solution {
public:
    int dp[101];
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        dp[0]=nums[0];
        dp[1]=nums[1];
        dp[2]=nums[0]+nums[2];
        
        for(int i=3;i<nums.size();i++){
            dp[i]=max(dp[i-2],dp[i-3])+nums[i];
            
        }
        
        dp[n]=max(dp[n-1],dp[n-2]);
        return dp[n];
    }
};