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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 1;
        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL){
            temp = temp->next->next;
            length = length + 2; 
        } 

        if(temp == NULL) length--;
        if(length == n) return head->next;

        length = length - n - 1;
        temp = head;

        while (length > 1){
            temp = temp->next->next;
            length = length - 2;
        }

        if(length == 1){
            temp = temp->next;
            temp->next = temp->next->next;
            return head;
        } else{
            temp->next = temp->next->next;
            return head;
        }
               
    }
};
