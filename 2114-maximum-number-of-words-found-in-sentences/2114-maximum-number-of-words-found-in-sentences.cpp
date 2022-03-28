class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++){
            int l=1;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ') l++;
                else continue;
            }
            if(l>=ans) ans=l;
        }
        return ans;
    }
};