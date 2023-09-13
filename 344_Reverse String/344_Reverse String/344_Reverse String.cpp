#include <iostream>
#include <vector>

class Solution
{
public:
    void reverseString(std::vector<char>& s)
    {
        // Initialize a left pointer at the start of the vector
        int left = 0;
        // Initialize a right pointer at the end of the vector
        int right = s.size() - 1;

        while (left < right)
        {
            // Swap the characters at the left and right pointers
            int tmp = s[left];
            s[left++] = s[right];
            s[right--] = tmp;
        }
    }
};

int main()
{
    Solution solution;
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s);
   
    std::cout << "Reversed String: ";
    for (char c : s) std::cout << c;
    std::cout << std::endl;

    std::cin.get();
    return 0;
}