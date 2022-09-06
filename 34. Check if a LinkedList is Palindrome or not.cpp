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
     ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        ListNode *p =nullptr;

        while(temp){
            ListNode *n = temp->next;
            temp->next = p;
            p=temp;
            temp=n;        
    }
        return p;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* tmp=head;
        string f="";
        string r="";
        while(tmp!=NULL){
            f+=to_string(tmp->val);
            tmp=tmp->next;
        }
        ListNode* rev=reverseList(head);
        while(rev!=NULL){
            r+=to_string(rev->val);
            rev=rev->next;
        }
        if(f==r)
            return true;
        else return false;
    }
};
