#include <iostream>
#include <sstream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
		if (x < 0)
			return false;
		stringstream ss;
		string str;
		ss << x;
		ss >> str;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != str[str.length() - i - 1])
				return false;
		}
		return true;
    }
};

int main(int argc, char *argv[])
{
	Solution s;

	if (argc == 2)
		std::cout << s.isPalindrome(atoi(argv[1]));
	std::cout << std::endl;
	return (0); 
}