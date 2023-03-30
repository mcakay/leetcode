#include <iostream>

class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int temp;
		if (n == 0)
			return 0;
        for (int i = 0; i < n - 1; i++)
        {
            temp = b;
            b = a + b;
            a = temp;
        }
        return b;
    }
};

int main(int argc, char *argv[])
{
	Solution s;

	if (argc == 2)
		std::cout << s.fib(atoi(argv[1]));
	std::cout << std::endl;
	return (0);
}