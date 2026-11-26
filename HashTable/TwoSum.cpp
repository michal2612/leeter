#include <vector>
#include <map>

using namespace std;

// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> valueToIndex {};
        
        for(int i = 0; i < nums.size(); i++)
        {
            if (auto res = valueToIndex.find(target - nums[i]); res != valueToIndex.end())
                return { res->second, i };
            valueToIndex[nums[i]] = i;
        }
        return {}; // unreachable
    }
};

#include <iostream>


int main() {
    return 0;
}