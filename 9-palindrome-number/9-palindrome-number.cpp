class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>nums;
        if(x<0) return false;
        while(x){
            nums.push_back(x%10);
            x=x/10;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[nums.size()-i-1]) return false;
        }
        return true;
    }
};