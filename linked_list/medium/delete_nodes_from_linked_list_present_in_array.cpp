#include <bits/stdc++.h>
using namespace std;
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

    bool binarySearch(vector<int> &nums, int x){
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==x){
                return true;
            }
            if(nums[mid]>x){
                r=mid-1;
            }
            if(nums[mid]<x){
                l=mid+1;
            }
        }
        return false;
    }

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(begin(nums), end(nums));
        ListNode* temp = head;
        ListNode* prev=temp;
        while(temp){
            if(temp==head){
                if(binarySearch(nums, temp->val)){
                    head = head->next;
                    prev = head; 
                }
            }else{
                if(binarySearch(nums, temp->val)){
                    prev->next = temp->next;
                }else{
                    prev = prev->next;
                }
            }
            temp = temp->next;
        }
        return head;
    }
};