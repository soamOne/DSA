class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merged;int m=nums1.size();int n=nums2.size();double median;int msize=m+n;
        merged.reserve(msize); 
        merged.insert( merged.end(), nums1.begin(), nums1.end() );
        merged.insert( merged.end(), nums2.begin(), nums2.end() );
        sort(merged.begin(),merged.end());
        if (msize%2==0){
            median=((merged[(msize/2)-1]+merged[(msize/2)])/2.00000);
        }else{cout<<"nogo";
              median=merged[((msize+1)/2)-1];}
        
        return median;           
        
    }
};
