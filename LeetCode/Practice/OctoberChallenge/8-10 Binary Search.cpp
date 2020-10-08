class Solution {
public:
    int search(vector<int>& nums, int target) {        
        int start=0;int last=nums.size()-1;
        while(start<=last){
            int mid=start+((last-start)/2);
            if (target==nums[mid]) return mid;
            if (target>nums[mid]) start=mid+1;
            if (target<nums[mid]) last=mid-1; }
        return -1;
    }
};
