class Solution {
public:
    void combinationFinder(vector<int>& candidates, int target, vector<vector<int>>& result,vector<int>& s,int i){
        if(target<0) return;
        if(target==0){
            result.push_back(s);
            return;
        }
        while(i<candidates.size() && target-candidates[i]>=0){
            s.push_back(candidates[i]);
            combinationFinder(candidates,target-candidates[i],result,s,i);
            i++;
            s.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> s;
        vector<vector<int>> result;
        int i=0;
        combinationFinder(candidates,target,result,s,i);
        return result;
        
    }
};
