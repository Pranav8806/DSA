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
        if(head==NULL) return NULL;
        else if(head->next==NULL && n==1) return NULL;
        int size=0;
        ListNode* temp=head;
        while(temp !=NULL){
            size++;
            temp=temp->next;
        }
        if(n>size) return head;
        if(n==size){
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        int pos=size-n;
        ListNode* temp2=head;
        for(int i=1;i<pos;i++){
            temp2=temp2->next;
        }
        ListNode* del=temp2->next;
        temp2->next=temp2->next->next;
        delete del;
        return head;
    }
};