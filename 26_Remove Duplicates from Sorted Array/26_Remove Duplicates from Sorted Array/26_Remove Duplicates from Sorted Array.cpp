#include <iostream>
#include <vector>
#include <unordered_set>

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        // k initialized to 1 because first element is always unique
        int k = 1;

        // starting from index 1
        for (int i = 1; i <nums.size(); i++)
        {
            // compare element with precious element
            if (nums[i] != nums[i-1])
            {
                // LeetCode wants also an updated array in-place
                nums[k] = nums[i];
                // count unique elements
                k++;
            }
        }

        return k;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    int uniqueCount = solution.removeDuplicates(nums);

    std::cout << "The number of unique elements is: " << uniqueCount << std::endl;

    std::cin.get();
    return 0;
}

