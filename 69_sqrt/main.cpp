#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        long i = 0;
		if (x < 2)
			return x;
		while (i <= x)
		{
			if (i * i > x)
				return (i - 1);
			i++;
		}
		return (i);
    }
};

int main(int argc, char *argv[])
{
	Solution s;
	if (argc == 2)
		std::cout << s.mySqrt(atoi(argv[1]));
	std::cout << std::endl;
	return (0);
}