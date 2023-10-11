/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     LNistNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val)head=head->next;
        ListNode* curr=head,*prev=head;
        while(curr){
            if(curr->val==val){
                prev->next=curr->next;
                curr=prev;
            }
            prev=curr;
            curr=curr->next;
        }
        return head;
    }
};