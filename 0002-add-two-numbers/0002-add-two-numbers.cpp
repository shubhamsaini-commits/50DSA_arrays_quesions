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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1== nullptr) return l2;
        if(l2== nullptr) return l1;

        ListNode* head = l1;
        ListNode* back = nullptr;
        
        int carry = 0;
        int ans = 0;
        int rem = 0;
        while(l1!= nullptr && l2!= nullptr){
            ans = l1->val + l2->val + carry;
            carry = ans/10;
            rem = ans%10;
            l1->val = rem;
            back = l1;
            l1 = l1->next;
            l2= l2->next;
        }
        while(l1!= nullptr){
            ans = l1->val + carry;
            carry = ans/10;
            rem = ans%10;
            l1->val = rem;
            back = l1;
            l1 = l1->next;
        }
        
        while(l2!= nullptr){
            ans = l2->val + carry;
            carry = ans/10;
            rem = ans%10;
            l2->val = rem;
            back->next = l2;
            back = back->next;
            l2 = l2->next;
        }
        if(carry>0){
            ListNode* carryptr = new ListNode(carry);
            back->next = carryptr;
        }
        return head;
    }
};