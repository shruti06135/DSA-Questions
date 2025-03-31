#include<bits/stdc++.h>
using namespace std;

// Question 1 : 141. Linked list cycle
// Link : https://leetcode.com/problems/linked-list-cycle/description/


// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if(head==NULL) return false;
            if(head->next==head) return true;
            ListNode* slow=head;
            ListNode* fast=head;
            while(fast->next!=NULL && (fast->next)->next!=NULL){
                slow=slow->next;
                fast=(fast->next)->next;
                if(fast==slow) return true;
            }
            return false;
        }
};

// Question 2 : 876. Middle of the linked list
// Link : https://leetcode.com/problems/middle-of-the-linked-list/submissions/1591890121/


// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            if(head->next==NULL) return head;
            ListNode* temp=head;
            int cnt=1;
            while(temp->next!=NULL){
                temp=temp->next;
                cnt++;
            }
            int i=0;
            temp=head;
            while(i<cnt/2){
                temp=temp->next;
                i++;
            }
            return temp;
        }
};