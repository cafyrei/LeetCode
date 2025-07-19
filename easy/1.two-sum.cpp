/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map = {};
        
        for(int i = 0; i < nums.size(); i++) {
            int supplement = target - nums[i];

            if(map.find(supplement) != map.end()) {
                return {
                    map[supplement], i
                };
            }

            map[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

