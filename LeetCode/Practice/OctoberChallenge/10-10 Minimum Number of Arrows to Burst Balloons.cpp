class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()<=1) return points.size();
        std::sort(points.begin(), points.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[1] < b[1];});
        int ans=0;
        int i=0;int x;
        while(i<points.size()){
            ans++;
            x=points[i++][1];
            while(i<points.size() && points[i][0]<=x) i++;
            
        }return ans;
        
    }
};
