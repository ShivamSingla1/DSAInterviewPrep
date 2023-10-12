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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* left = head, *right = head->next, *temp = right;
        while(left->next && right->next){
            left->next = right->next;
            left = left->next;
            right->next = right->next->next;
            right = right->next;
        }
        left->next = temp;

        return head;
    }
};