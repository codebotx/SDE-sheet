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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        int carry=0;
        ListNode* res =new ListNode();
        ListNode* temp=res;
        while(t1!=NULL && t2!=NULL){
            int s= carry+ t1->val+t2->val;
            temp->next = new ListNode(s%10);
            carry=s/10;
            temp=temp->next;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1==NULL && t2!=NULL){
            int s= carry+t2->val;
            temp->next = new ListNode(s%10);
            carry=s/10;
            temp=temp->next;
            t2=t2->next;
        }
        while(t2==NULL && t1!=NULL){
            int s= carry+t1->val;
            temp->next = new ListNode(s%10);
            carry=s/10;
            temp=temp->next;
            t1=t1->next;
        }
        if(carry){
            temp->next=new ListNode(carry);
        }
        return res->next;
    }
};
