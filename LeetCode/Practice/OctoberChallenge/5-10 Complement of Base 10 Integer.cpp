class Solution {
public:
    int bitwiseComplement(int N) {
        vector<int> binN;//vector<int> binN(32); 
        if(N==0) return 1;
        while(N!=0){
            binN.push_back(N%2);
            N=N/2;
        }
        reverse(binN.begin(),binN.end());
        int res=0;int j=0;
        for(int i=binN.size()-1;i>=0;i--){
            if (binN[i]==0) res+=pow(2,j)*1;
            j++;
        }return res;
        
    }
};
