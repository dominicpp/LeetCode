#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// https://leetcode.com/problems/largest-number/

class Solution
{
public:
    // Custom comparison function to order two strings based on their concatenated values 
    static bool compare(std::string& a, std::string& b)
    {
        return (a + b) > (b + a);
    }

    std::string largestNumber(std::vector<int>& nums)
    {
        // Convert the integers to strings for easy comparison
        std::vector<std::string> numString;
        for (int i = 0; i < nums.size(); i++)
        {
            numString.push_back(std::to_string(nums[i]));
        }

        // Sort the strings in descending order using the custom comparison function
        std::sort(numString.begin(), numString.end(), compare);

        // If the largest number is 0, return "0" as the result
        if (numString[0] == "0") return "0";

        // Concatenate the sorted strings to form the largest number
        std::string res = "";
        for (int i = 0; i < numString.size(); i++) res += numString[i];

        return res;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = { 3, 30, 34, 5, 9 };
    std::string res = solution.largestNumber(nums);

    std::cout << "Largest number formed is: " << res << std::endl;

    std::cin.get();
    return 0;
}
