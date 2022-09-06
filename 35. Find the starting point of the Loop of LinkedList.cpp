/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        ListNode* temp=head;
        while(s.find(temp)==s.end()){
            if(temp==NULL)
                return NULL;
            s.insert(temp);
            temp=temp->next;
        }
        return temp;
    }
};
