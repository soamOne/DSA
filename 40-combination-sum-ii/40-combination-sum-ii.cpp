class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        search(0, candidates, temp, target);
        return ans;
    }
    
    void search(int index, vector<int>& candidates, vector<int>& temp, int target){
            if(target==0){
                ans.push_back(temp);
                return;
            }
        
        for(int i=index;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i && candidates[i]==candidates[i-1] && i>index) continue;
            temp.push_back(candidates[i]);
            search(i+1, candidates, temp, target-candidates[i]);
            temp.pop_back();
        }
    }
};