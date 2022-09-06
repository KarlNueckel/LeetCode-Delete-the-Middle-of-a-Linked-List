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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){//for lists of size 1
            head = NULL;
            return head;
        }
        
        ListNode* walk = head;
        
        int n = 1;
        while(walk->next){//get total amount of elements
            walk = walk->next;
            n++;
        }
        n = n/2;
        //cout << n << endl;
        walk = head;
        
        while(n != 1){//move to the element to be deleted
            n--;
            walk = walk->next;
        }
        walk->next = walk->next->next;//remove element
        
        return head;//return results
    }
};