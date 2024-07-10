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
        if(!head || !k) return head;
        ListNode* tail(head), *cur(head), *res;

        int len = 1;
        while(tail->next) tail = tail->next, len++;

        k = k % len;
            if(!k) return head;
            k = len - k;

            while(--k) cur = cur->next;

            res = cur->next;
            cur->next = NULL;
            tail->next = head;
        
        return res;
    }
};