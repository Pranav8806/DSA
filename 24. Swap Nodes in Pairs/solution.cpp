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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        vector<int>ans;
        ListNode*temp=head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        if (ans.empty()) return NULL;
        for(int i = 0; i + 1 < ans.size(); i += 2) {
            swap(ans[i], ans[i+1]);
        }
        ListNode*nhead=new ListNode(ans[0]);
        ListNode*temp2=nhead;
        for(int i=1;i<ans.size();i++){
            temp2->next=new ListNode(ans[i]);
            temp2=temp2->next;

        }
    return nhead;    
    }
};