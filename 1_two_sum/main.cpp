#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it = nums.begin();
        vector<int>::iterator ite = nums.end();
        vector<int> ret;
        int index = 0;
        while (it != ite)
        {
            int tempIndex = 0;
            vector<int>::iterator temp = nums.begin();
            while(temp != ite)
            {
                if (it != temp && *it + *temp == target)
                {
                    ret.push_back(index);
                    ret.push_back(tempIndex);
                    return ret;
                }
                temp++;
                tempIndex++;
            }
            it++;
            index++;
        }
        return vector<int>(0);
    }
    
};

int main(void)
{
	Solution s;
	vector<int> vec = {2, 7, 11, 15};
	vector<int> ret = s.twoSum(vec, 9);
	vector<int>::iterator it = ret.begin();
	vector<int>::iterator ite = ret.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	return (0);
}