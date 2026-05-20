class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> preMap;
        for (int i=0; i<nums.size(); i++) {
            int key = target - nums[i];
            if (preMap.find(key) != preMap.end()) {
                return {preMap[key], i};
            }
            preMap[nums[i]] = i;
        }
        return {};
    }
};
