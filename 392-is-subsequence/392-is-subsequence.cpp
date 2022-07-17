class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=s.length(), m=t.length();
        int i=0, j=0;
        while(i<l && j<m){
            if(s[i]==t[j]){
                i++;j++;
            }
            else j++;
        }
        return i==l;
    }
};