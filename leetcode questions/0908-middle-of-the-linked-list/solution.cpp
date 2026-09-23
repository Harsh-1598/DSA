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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* middle = head;

        while(temp->next != NULL && temp->next->next != NULL){
            temp = temp->next->next;
            middle = middle->next;
        }

        if(temp->next != NULL){
            middle = middle->next;
            return middle;
        }
        
        return middle;
        
    }
};
