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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL || k == 0) return head;

        ListNode* curr = head, *temp = head;
        int len =1;
        while(curr->next){
            curr = curr->next;
            len++;
        }
        
        curr->next = head;
        k=k%len;
        int end = len-k-1;
        while(end){
            temp = temp->next;
            end--;
        }

        ListNode* ans = temp->next;
        temp->next = NULL;

        return  ans;
    }
};