class Solution {
public:
    string removeDuplicates(string s) {
        string temp=" ";
        for(int i=0;i<s.length();i++){
            if(temp[temp.size()-1]!=s[i]) temp.push_back(s[i]);
            else temp.pop_back();
        }
        temp.erase(0,1);
        return temp;
    }
};