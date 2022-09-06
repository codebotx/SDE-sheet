/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
	bool hasCycle(ListNode *head)
	{
		unordered_set<int> testset;
		ListNode *temp = head;
		int c = pow(10, 4);
		if (temp == NULL)
			return false;
		while (c)
		{
			if (temp->next == NULL)
				return false;
			c--;
			temp = temp->next;
		}
		return true;
	}
};