#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution
{
public:
	int lengthOfLongestSubstring(std::string s)
	{
		// Initialize pointers and max length
		int i = 0, j = 0, maxLength = 0;
		// Set to track unique characters
		std::unordered_set<char> set;

		while (i < s.size() && j < s.size())
		{
			// If a character is already in set
			if (set.find(s[i]) != set.end())
			{
				// Remove character from set
				set.erase(s[j]);
				j++;
			}
			else {
				// Add character to set
				set.insert(s[i]);
				// Update maxLength with larger value between its current value and the length of current substring
				// Adding 1 at the end is necessary because the length of a substring is inclusive of both the left and right pointers
				// Without adding 1, we would miss counting the current character pointed to by i
				maxLength = std::max(maxLength, i - j + 1);
				i++;
			}
		}

		return maxLength;
	}
};

int main()
{
	Solution solution;
	std::string str = "abcabcbb";
	int res = solution.lengthOfLongestSubstring(str);
	
	std::cout << "Length of longest substring is: " << res;

	std::cin.get();
	return 0;
}