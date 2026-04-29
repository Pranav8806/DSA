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
        vector<int>ans;
        ListNode*temp=head;
        //conversion of ll to vector
        while(temp !=NULL )
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        if(k>ans.size()) return head;
        //swapping the required nodes
        swap(ans[k-1],ans[ans.size()-k]);
        if (ans.empty()) return NULL;
        //again converting vector into list
        ListNode *nhead=new ListNode(ans[0]);
        ListNode*temp2=nhead;
        for(int i=1;i<ans.size();i++){
            temp2->next=new ListNode(ans[i]);
            temp2=temp2->next;
        }
    return nhead;
        
    }
};