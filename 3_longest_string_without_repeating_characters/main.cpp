#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		(void)s;
        return (0);
    }
};

int main(int argc, char *argv[])
{
	Solution s;
	if (argc == 2)
	{
		const int result = s.lengthOfLongestSubstring(argv[1]);
		std::cout << result;
	}
	std::cout << std::endl;
	return (0);
}