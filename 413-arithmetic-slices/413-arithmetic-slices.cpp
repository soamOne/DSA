class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        if(nums.size()<3) return 0;
        vector<int> dp(nums.size(),0);
        //if(nums[2]-nums[1]==nums[1]-nums[0]) dp[2]=1;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]) dp[i]=dp[i-1]+1;
            ans+=dp[i];
        }
        return ans;
    }
};