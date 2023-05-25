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

void reverse(ListNode* head){

}


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp -> next;
        }
        if(size == 0) return head;
        k %= size;
        if(k == 0) return head;
        ListNode* a= head, *b;
        temp = a;
        k = size - k;
        // for()
        while(temp && temp->next && --k > 0){
            temp = temp->next;
        }
        b= temp->next;
        temp -> next = NULL;
        temp = b;
        while(temp && temp -> next){
            temp = temp->next;
        }
        temp->next = a;
        return b;
    }
};