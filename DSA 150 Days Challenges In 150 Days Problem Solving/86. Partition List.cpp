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
    ListNode* partition(ListNode* head, int x) {

        //Dummy nodes to server at the start of less than and grater than or eqal lists
        ListNode left(0);
        ListNode right(0);

        //pOINTERS TO THE CURRENT END OF LESS THAN AND GREATER OR ==  LISTES 
        ListNode* l = &left;
        ListNode* r = &right;

        //tRAVERSE THE ORIGINA; lIST
        ListNode* cur = head;
        
        while(cur) {
            if(cur->val < x) {

                //aPPEND CHILD TO THE LESS THAN LIST
                l->next = cur;
                l = l->next;

            }
            else{

                
                r->next = cur;
                r = r->next;
            }

            cur = cur->next;
        }

    // HERE END THE GREATER OR EQUAL LIST
        r->next = NULL;

        // CONNECT THEAN LESS THAN LISTS WITHTHE GTRATER OR EQUAL LISTS
        l->next = right.next;

        // RETURN THER HEAD OF THR MODIFIED LIST
        return left.next;
        
    }
};