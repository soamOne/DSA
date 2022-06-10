class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1, h=1000001;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            long long int sum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%mid==0) sum+=(nums[i]/mid);
                else sum+=nums[i]/mid+1;
            }
            if(sum>threshold) l=mid+1;
            else{
                ans=mid;
                h=mid-1;
            }
        }
        return ans;
        
    }
};