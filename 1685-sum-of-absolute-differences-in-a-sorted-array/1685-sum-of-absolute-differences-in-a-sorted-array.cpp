class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        vector<int> pref(nums.size(),0);
        vector<int> suf(nums.size(),0);
        for(int i=1;i<nums.size();i++) pref[i]=pref[i-1]+nums[i-1];
        for(int j=nums.size()-2;j>=0;j--) suf[j]=suf[j+1]+nums[j+1];
        for(int i=0;i<nums.size();i++){
            ans[i]=(suf[i]-(nums[i]*(nums.size()-i-1)))+((nums[i]*i)-pref[i]);
    }
        return ans;
    }
};