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
        if(!head || !head->next)return head;
        ListNode* curr=head,*prev=head;
        while(curr && curr->next){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }
            else curr=curr->next;
        }
        return head;
    }
};