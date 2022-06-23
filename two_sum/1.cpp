/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

// Below is the solution for TWO SUM problem

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        for (auto i = nums.begin() ; i != nums.end() ; i++)
        {
            for ( auto j = i+1 ; j != nums.end() ; j++ )
            {
                if (target == *i + *j)
                {
                    result.push_back(i-nums.begin());
                    result.push_back(j-nums.begin());
                        break;
                }
            }
        }
        return result;
        
    };
};