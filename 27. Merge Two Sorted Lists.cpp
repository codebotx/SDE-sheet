class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res=list1;
        ListNode* t1=list1;
        ListNode* t2= list2;
        while(t1->next!=nullptr && t2->next!=nullptr){
            if(t1->val>t2->val){
                res->val=t1->val;
                res->next=nullptr;
                res=res->next;
                t1=t1->next;
            }
            else{
                res->val=t1->val;
                res->next=nullptr;
                res=res->next;
                t1=t1->next;
            }
        }
        return res;
    }
};
