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
        if (head == nullptr || head->next == nullptr){
        return false;
    } 
    else{
        ListNode *first = head, *second = head->next;
        while (first != second) {
            if (second == nullptr || second->next == nullptr){
                return false;
            } 
            else{
                first = first->next;
                second = second->next->next;
            }
        }
        return true;
        }
    }
    
};