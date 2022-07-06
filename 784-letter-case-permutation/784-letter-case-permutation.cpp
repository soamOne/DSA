class Solution {
public:
    vector<string> ans;
    vector<string> letterCasePermutation(string s) {
        string temp="";
        combination(0, temp, s);
        return ans;
    }
    
    void combination(int i, string temp, string s){
        if(i==s.size()){
            ans.push_back(temp);
            return;
        }
        
        if(isalpha(s[i])){
            if(islower(s[i])){
                temp.push_back(s[i]);
                combination(i+1, temp, s);
                temp.pop_back();
                temp.push_back(toupper(s[i]));
                combination(i+1, temp, s);
                temp.pop_back();

            }
            else if(isupper(s[i])) {
                temp.push_back(s[i]);
                combination(i+1, temp, s);
                temp.pop_back();
                temp.push_back(tolower(s[i]));
                combination(i+1, temp, s);
                temp.pop_back();

            }
        }
        else if(isdigit(s[i])){
            temp.push_back(s[i]);
            combination(i+1, temp, s);
            temp.pop_back();
        }
    }
};