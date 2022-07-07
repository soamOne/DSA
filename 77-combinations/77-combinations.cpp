class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        util(1,n,k,temp);
        return ans;
    }
    
    void util(int ind, int n, int k, vector<int>& temp){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<=n;i++){
            temp.push_back(i);
            //if(temp.size()>k) break;
            util(i+1, n, k, temp);
            temp.pop_back();
        }
    }
};