// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        int number = x;
        // for case like x = 1234567899
        // couldn't find better way for handling big numbers.
        long long rev_number = 0;
        while(number > 0)
        {
            rev_number = rev_number * 10 + number % 10;
            number /= 10;
        }
        return x == rev_number;
    }
};

#include <iostream>

int main()
{
    int number = 1234567899;
    Solution s{};
    std::cout << s.isPalindrome(number) << '\n';
    return 0;
}