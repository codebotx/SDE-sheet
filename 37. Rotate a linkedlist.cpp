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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        if (c==0 || c==1)
            return head;
        k= k%c;
        if (k==0)
            return head;
        ListNode* res;
        temp=head;
        int n=c-k;
        while(n>1){
            temp=temp->next;
            n--;
        }
        res=temp->next;
        temp=head;
        n=c-k;
        while(n>1){
            temp=temp->next;
            n--;
        }
        temp->next=NULL;
        temp=res;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        return res;
        }
    
};
