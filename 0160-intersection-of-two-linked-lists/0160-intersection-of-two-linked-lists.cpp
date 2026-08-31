/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*>s1;
        stack<ListNode*>s2;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            s1.push(temp1);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            s2.push(temp2);
            temp2=temp2->next;
        }
        ListNode* mergept=NULL;
        while(!s1.empty() && !s2.empty()){
            if(s1.top()==s2.top()){
                mergept=s1.top();
                s1.pop();
                s2.pop();
            }
            else{
                break;
            }
        }
    return mergept;
    }
};