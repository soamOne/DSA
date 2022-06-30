class Solution {
public:
    void findCombination(int x, int target, vector<int>& candidates, vector<vector<int>> &ans, vector<int> &temp){
        if(x==candidates.size()){
            if(target==0) ans.push_back(temp);
            return;
        }
        
        if(candidates[x]<=target){
            temp.push_back(candidates[x]);
            findCombination(x, target-candidates[x], candidates, ans, temp);
            temp.pop_back();
        }
        
        findCombination(x+1, target, candidates, ans, temp);    
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        findCombination(0, target, candidates, ans, temp);
        return ans;
    }
};