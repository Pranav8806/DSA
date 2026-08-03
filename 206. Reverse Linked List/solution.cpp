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
        ListNode *currptr=head;
        ListNode *prev=NULL;
        while(currptr!=NULL)
        {
            ListNode *temp=currptr->next;
            currptr->next=prev;
            prev=currptr;
            currptr=temp;
            
        }
        return prev;
    }
};