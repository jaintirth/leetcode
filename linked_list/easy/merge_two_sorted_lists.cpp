// struct ListNode 
// {
//   int val;
//   ListNode *next;
//   ListNode() : val(0), next(nullptr) {}
//   ListNode(int x) : val(x), next(nullptr) {}
//   ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* head = new ListNode();
        ListNode* temp = head;

        while(list1 && list2)
        {
            if(list2->val <= list1->val)
            {
                temp->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            else
            {
                temp->next =new ListNode(list1->val);
                list1 = list1->next;
            }
            temp = temp->next;
        }
        if(!list1)
        {
            temp->next=list2;
        }
        if(!list2)
        {
            temp->next=list1;
        }
        return head->next;    
    }
};
