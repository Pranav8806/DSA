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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL) return{-1,-1};
        ListNode *temp=head->next;
        ListNode *prev=head;
        int node=2;
        int firstcp=-1;
        int prevcp=-1;
        int mn=INT_MAX;
        int mx=INT_MIN;
        while(temp->next!=NULL){
            if((prev->val>temp->val && temp->val<temp->next->val) ||(prev->val<temp->val && temp->val>temp->next->val)){
                if(firstcp==-1){
                    firstcp=node;
                }
                if(prevcp!=-1){
                    mn=min(mn,node-prevcp);
                }
                mx=node-firstcp;
                prevcp=node;
            }
            prev=temp;
            node++;
            temp=temp->next;
        }
        if(mx==INT_MIN || mn==INT_MAX) return{-1,-1}; 
        if(firstcp==-1 ) return{-1,-1};
        return{mn,mx};
    }
};