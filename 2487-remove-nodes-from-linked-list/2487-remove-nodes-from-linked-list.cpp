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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *temp=head;
        stack<int>st;
        while(temp!=NULL){
            while(!st.empty() && st.top()<temp->val){
                st.pop();
            }
            st.push(temp->val);
            temp=temp->next;
        }
        if(st.size()==0) return NULL;
        ListNode *nhead=new ListNode(st.top());
        st.pop();
        while(!st.empty()){
            ListNode *newNode=new ListNode(st.top());
            newNode->next=nhead;
            nhead=newNode;
            st.pop();
        }
        return nhead;
    }
};