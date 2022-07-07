class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        search(0, nums);
        return ans;
    }
    
    void search(int i, vector<int>& nums){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int x=i;x<nums.size();x++){
            swap(nums[i], nums[x]);
            search(i+1, nums);
            swap(nums[i], nums[x]);
        }
    }
};