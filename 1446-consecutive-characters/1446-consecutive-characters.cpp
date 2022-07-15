class Solution {
public:
    int maxPower(string s) {
        if(s.size()<2) return 1;
        int ans=0;
        int temp=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1] && i+1!=s.size()-1)
                temp++;
                
            else if(s[i]==s[i+1] && i+1==s.size()-1)
                ans=max(ans, ++temp);
            
            else{
                ans=max(temp, ans);
                temp=1;
                continue;
            }
           
        }
        return ans;
    }
};