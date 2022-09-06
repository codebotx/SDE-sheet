/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
     std::unordered_map<Node*, Node*> um;
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        Node* head1=head;
        Node* head2=head;
        auto it = um.find(head1);
        if (it != um.end())
            return it->second;
        Node* temp = new Node(head->val);
        um[head1] = temp;
        temp->next = copyRandomList (head->next);
        temp->random = copyRandomList (head->random);
        return temp;
    }
};
