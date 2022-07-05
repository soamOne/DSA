class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=nums[0], s=0;
        for(int i:nums){
            s+=i;
            if(s>m) m=s;
            if(s<0) s=0;
        }
        return m;
    }
};