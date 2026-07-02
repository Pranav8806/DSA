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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head==NULL || head->next==NULL) return head;
        ListNode *dummy=new ListNode();    //to store a dummy ptr before head
        dummy->next=head;
        ListNode *prevleft=dummy;
        for(int i=1;i<left;i++){      // incremrnt until we reach to one left of left
            prevleft=prevleft->next;
        }
        ListNode *temphead=prevleft->next;
        ListNode *currptr=temphead;
        ListNode *prev=NULL;
        for(int i=left;i<=right;i++)      //reversal of the selected nodes
        {
            ListNode *temp=currptr->next;
            currptr->next=prev;
            prev=currptr;
            currptr=temp;    
        }
        //reconnecting the reversed node
        prevleft->next=prev;         //prev points to first node of reversed list 
        temphead->next=currptr;      //curr

        return dummy->next;
    }
};