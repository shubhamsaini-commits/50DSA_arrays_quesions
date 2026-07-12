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
    vector<ListNode*> reversePart( ListNode* st, ListNode* end){
        ListNode* back = nullptr;
        ListNode* forw = nullptr;
        ListNode* endd = st;
        while(st!= end){
            forw = st->next;
            st->next = back;
            back = st;
            st = forw;
        }
        return {back , endd};
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* back = nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        int size = 1;
        vector <ListNode*> vec;
        while(size!=k+1){
            fast = fast->next;
            size++;
        }
       if(fast== nullptr){
        return reversePart(slow , nullptr)[0];
       }
        vec = reversePart(slow , fast);
        head = vec[0];
        vec[1]->next = fast;
        size = 1;
        ListNode* prev= nullptr;
        prev = vec[1];
        slow = fast;
        while(fast!= nullptr){
            fast = fast->next;
            size++;
            if(size == k+1){
                vec = reversePart(slow , fast);
                prev->next = vec[0];
                vec[1]->next = fast;
                slow = fast;
                prev = vec[1];
                size = 1;
            }
        }



        if(size == k+1){
            vec = reversePart(slow , fast);
                prev->next = vec[0];
                vec[1]->next = fast;
                size = 1;
        }
        return head;
    }
};