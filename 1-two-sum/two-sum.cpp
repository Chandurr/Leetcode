class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;  // to store the value and its index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];  // find the complement
            
            if (numMap.find(complement) != numMap.end()) {
                // If the complement exists, return the indices
                return {numMap[complement], i};
            }
            
            // Otherwise, store the number and its index in the map
            numMap[nums[i]] = i;
        }
        
        return {};  // should never reach here because the problem guarantees one solution
    }
};
