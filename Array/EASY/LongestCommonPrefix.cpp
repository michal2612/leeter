#include <vector>
#include <string>

using namespace std;

//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.size() == 0) return {};
        auto result = strs.at(0);
        for(int i = 1; i < strs.size(); i++)
        {
            auto word = strs.at(i);
            auto matched = 0;
            while(matched < word.size())
            {
                if (result.size() > matched && word.at(matched) == result.at(matched))
                    matched++;
                else
                {
                    break;
                }
            }
            result = word.substr(0, matched);
            if (result.empty())
                return {};
        }
        return result;
    }
};

#include <iostream>

int main(int argc, char* argv[])
{
    Solution s{};
    std::vector<string> items { "ab", "a" };
    std::cout << s.longestCommonPrefix(items) << '\n';
    return 0;
}