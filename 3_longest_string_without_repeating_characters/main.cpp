#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		map<int, string> m;
		string addString = "";
		int addNumber = 0;
		if (s.length() == 0)
			return 0;
		int j = 0;
		for (size_t i = 0; i < s.length(); i++)
		{
			if (addString.find(s[i]) == string::npos)
				addString += s[i];
			else
			{
				m.insert(pair<int, string>(addNumber, addString));
				i = j;
				j++;
				addNumber = 0;
				addString = "";
				continue;
			}
			addNumber++;
		}
		m.insert(pair<int, string>(addNumber, addString));
		map<int, string>::iterator it = m.end();
		it--;
        return (it->first);
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