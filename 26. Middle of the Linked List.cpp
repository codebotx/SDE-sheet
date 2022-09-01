/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int c=0;
        while(temp->next!=nullptr){
            temp=temp->next;
            c++;
        }
        c++;
        int m =(int)c/2 +1;
        temp=head;
        for(int i=0;i<m-1;i++)
            temp=temp->next;
        return temp;
    }
};