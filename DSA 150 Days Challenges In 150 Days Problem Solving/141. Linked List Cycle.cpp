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
    bool hasCycle(ListNode *head) {

        auto one = head, two = head;  // do pointars, ek aur do, ko start karen, donon soochee ke head  par start  karen.
        while(two && two->next)  // Continue looping while two and two->next are not null.
        {
            one = one->next; // Move one pointer one step forward.
            two = two->next->next;
            if(one == two) return true;  // If one and two meet, a cycle is detected, so return true.
        }
        return false;
        
    }
};