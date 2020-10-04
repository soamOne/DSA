class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(),
          [](const std::vector<int>& a, const std::vector<int>& b) {
              return a[0] < b[0];});    
        for(int i=0;i<intervals.size();i++){
            int j=i+1;
            while(j<intervals.size()){
                if(intervals[i][0]==intervals[j][0]){
                    int x=intervals[i][1];
                    int y=intervals[j][1];
                    if(x<=y) intervals.erase(intervals.begin()+i);
                    else intervals.erase(intervals.begin()+j);
                }
                if(intervals[i][1]>=intervals[j][1]){     
                    cout<<intervals[j][0]<<intervals[j][1];
                    intervals.erase(intervals.begin()+j); 
                } 
                else j++;
                
                
            }
            
            
        }return intervals.size();
        
    }
};
