class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        search(0, nums, sub);
        return ans;
    }
    void search(int i, vector<int>& nums, vector<int>& sub){
        if(i==nums.size()){
            ans.push_back(sub);
            return;}
        else{
            search(i+1, nums, sub);
            sub.push_back(nums[i]);
            search(i+1, nums, sub);
            sub.pop_back();
        }
    }
};