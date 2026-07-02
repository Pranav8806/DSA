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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        for(int i=1;i<k;i++){
            curr=curr->next;
        }
        ListNode* st=curr;
        ListNode* ed=head;
        while(curr->next!=NULL){      //when curr points to last node ed point to kth node from end
            ed=ed->next;
            curr=curr->next;
        }
        swap(st->val,ed->val);
        return head;

    }
};