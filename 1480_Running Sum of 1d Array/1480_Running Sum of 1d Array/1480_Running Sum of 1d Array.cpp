#include <iostream>
#include <vector>

// https://leetcode.com/problems/running-sum-of-1d-array/

class Solution
{
public:
	std::vector<int> runningSum(std::vector<int>& nums)
	{
		std::vector<int> res;
		int sum = 0;
		
		for (int i = 0; i < nums.size(); i++)
		{
			// Calculate the running sum
			sum += nums[i];
			// Append the running sum to the result vector
			res.push_back(sum);
		}

		return res;
	}
};

int main()
{
	Solution solution;
	std::vector<int> nums = { 2, 4, 5, 6, 9};
	std::vector<int> res = solution.runningSum(nums);

	std::cout << "Running Sum: ";
	for (int i = 0; i < res.size(); i++) std::cout << res[i] << " ";
	std::cout << std::endl;

	std::cin.get();
	return 0;
}