class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int n= 0; n< nums.size(); n++){
            int diff= target- nums[n];
            if (m.find(diff) != m.end()){
                return {m[diff], n};
            }
            m[nums[n]]= n;
        }
        return {};
    }
};
