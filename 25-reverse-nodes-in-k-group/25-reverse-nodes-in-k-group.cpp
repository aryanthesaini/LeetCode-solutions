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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(k==1 or head==NULL) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* cur =dummy, * next = dummy, *prev= dummy;
        int s =0;
        
        while(cur->next!=NULL){
            s++;
            cur = cur->next;
        }
        
        while(s>=k){
            cur = prev->next;
            next = cur->next;
            for(int i=1;i<k;i++){
                cur->next= next->next;
                next->next = prev->next;
                prev->next = next;
                next = cur->next;
            }
            prev = cur;
            s-=k;
        }
        
        return dummy->next;
        
        
    }
};