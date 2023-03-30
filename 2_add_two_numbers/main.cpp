#include <iostream>

struct ListNode
{
	struct ListNode *next;
	int val;
	ListNode(int val)
	{
		this->val = val;
		this->next = NULL;
	}
};

class Solution {
private:
    void addNode(ListNode **root, ListNode *node)
    {
        if (*root == NULL)
            *root = node;
        else
        {
            ListNode *it = *root;
            while (it->next != NULL)
                it = it->next;
            it->next = node;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ret = NULL;
        int add = 0;
        int nextAdd;
        while (add != 0 || l1 != NULL || l2 != NULL)
        {
            if (l1 != NULL && l2 != NULL)
            {
                add += l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if (l1 != NULL)
            {
                add += l1->val;
                l1 = l1->next;
            }
            else if (l2 != NULL)
            {
                add += l2->val;
                l2 = l2->next;
            }
            nextAdd = 0;
            while (add >= 10)
            {
                nextAdd++;
                add -= 10;
            }
            ListNode *n = new ListNode(add);
            addNode(&ret, n);
            add = nextAdd;
        }
        return ret;
    }
};

int main(void)
{
	Solution s;
	ListNode *l1 = new ListNode(2);
	ListNode *l2 = new ListNode(4);
	ListNode *l3 = new ListNode(3);
	ListNode *l4 = new ListNode(5);
	ListNode *l5 = new ListNode(6);
	ListNode *l6 = new ListNode(4);
	l1->next = l2;
	l2->next = l3;
	l4->next = l5;
	l5->next = l6;
	ListNode *ret = s.addTwoNumbers(l1, l4);
	ListNode *it = ret;
	while (it != NULL)
	{
		std::cout << it->val << " ";
		it = it->next;
	}
	std::cout << std::endl;
	return (0);
}