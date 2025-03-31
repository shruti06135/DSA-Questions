#include<bits/stdc++.h>
using namespace std;

// Question 1 : 237. Delete node in a linked list
// Link : https://leetcode.com/problems/delete-node-in-a-linked-list/description/


//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
    public:
        void deleteNode(ListNode* node) {
            ListNode* temp = node->next;
            while(node->next!=NULL){
                node->val=temp->val;
                if(temp->next==NULL){
                    node->next=NULL;
                    break;
                }
                else {
                    node=node->next;
                    temp=temp->next;
                }
            }
            delete temp;
        }
};

// Question 2 : Linked list insertion at end
// Link : https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion

// Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
    public:
      Node *insertAtEnd(Node *head, int x) {
          Node *nn;
          nn=(Node*)malloc(sizeof(Node));
          nn->data=x;
          nn->next=NULL;
          if(head==NULL) return head=nn;
          Node *temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=nn;
          return head;
      }
};