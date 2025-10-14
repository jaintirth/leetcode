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

    set<int> s;

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* newHead = new ListNode();
        ListNode* temp2 = newHead;

        while(temp){
            s.insert(temp->val);
            temp=temp->next;
        }

        for(int num : s){
            temp2->next = new ListNode(num);
            temp2 = temp2->next;
        }

        return newHead->next;
    }
};