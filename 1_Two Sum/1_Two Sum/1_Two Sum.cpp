#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> res;
        std::unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (map.find(complement) != map.end())
            {
                // If it exists, add its indexand the current index to the result vector
                res.push_back(map[complement]);
                res.push_back(i);
                break;
            }

            // Add the current number and its index to the map
            map.insert(std::make_pair(nums[i], i));

        }

        return res;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    // Call the twoSum method and store the result
    std::vector<int> result = solution.twoSum(nums, target);

    if (result.size() == 2) std::cout << "The indices are: " << result[0] << " and " << result[1] << std::endl;
    else std::cout << "No matching pair found." << std::endl;
    
    std::cin.get();
    return 0;
}

