class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> set;
        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); i++) {
            if (temp.count(nums[i] - k)) {
                set.insert(nums[i] - k);
            }
            if (temp.count(nums[i] + k)) {
                set.insert(nums[i]);
            }

            temp[nums[i]] += 1;
        }
        
        return set.size();
    }
};
