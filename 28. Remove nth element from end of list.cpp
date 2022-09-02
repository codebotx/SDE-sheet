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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp->next!=nullptr){
            temp=temp->next;
            c++;
        }
        c++;
        if(c==n)
            return temp->next;
        temp=head;
        for(int i=0;i<n;i++)
            temp=temp->next;
        
        ListNode* res= head;
        while(c-n>0){
            res=res->next;
            c--;
        }
        temp->next=res->next;
        return head;
        
    }
};
