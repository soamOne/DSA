class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        search(0, candidates, temp, target);
        return ans;
    }
    
    void search(int i, vector<int>& candidates, vector<int>& temp, int target){
        if(i==candidates.size()){
            if(target==0) ans.push_back(temp);
            return;
        }
        
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            search(i, candidates, temp, target-candidates[i]);
            temp.pop_back();
        }
        
        search(i+1, candidates, temp, target);
    }
};