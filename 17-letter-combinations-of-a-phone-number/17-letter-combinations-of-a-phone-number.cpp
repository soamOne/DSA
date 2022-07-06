class Solution {
public:
    vector<string> mapping{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        string temp="";
        if(digits=="") return ans;
        util(digits, temp, 0);
        return ans;
    }
    
    void util(string &digits, string temp, int i){
        if(i==digits.size()){
            ans.push_back(temp);
            return;
        }
        else{
            for(char c : mapping[digits[i]-'2']){
                util(digits, temp+c, i+1);
            }
        }
    }
};