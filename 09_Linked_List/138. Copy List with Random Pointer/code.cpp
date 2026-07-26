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
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return nullptr;
        unordered_map<Node*,Node*>m;
        Node *oldtemp=head->next;
        Node *newHead=new Node(head->val);
        Node *newtemp=newHead;
        m[head]=newHead;
        while(oldtemp !=NULL){
            Node *newNode=new Node (oldtemp->val);
            m[oldtemp]=newNode;
            newtemp->next=newNode;
            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }
        oldtemp=head;
        newtemp=newHead;
        while(oldtemp !=NULL){
            newtemp->random=m[oldtemp->random];
            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }
        return newHead;
    }
};