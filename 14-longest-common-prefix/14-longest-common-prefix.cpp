class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=strs.size();
        string ans="";
        sort(strs.begin(), strs.end());
        string temp1=strs[0];
        string temp2=strs[l-1];
        for(int i=0;i<temp1.size();i++){
            if(temp1[i]==temp2[i]) ans+=temp1[i];
            else break;
        }
        return ans;
    }
};