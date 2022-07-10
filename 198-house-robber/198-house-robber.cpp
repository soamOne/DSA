class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[nums.size()+1];
        if(nums.size()<2) return nums[0];
        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]);
        int pick=0, notPick=0;
        for(int i=2;i<nums.size();i++){
            pick=nums[i]+dp[i-2];
            notPick=dp[i-1];
            dp[i]=max(pick, notPick);
        }
        return dp[nums.size()-1];
        
        
    }
};