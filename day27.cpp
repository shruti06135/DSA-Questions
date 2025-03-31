#include<bits/stdc++.h>
using namespace std;

// Question 1 : Reverse a doubly linked list
// Link : https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-doubly-linked-list


class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          if(head==NULL || head->next==NULL) return head;
          DLLNode* left=head;
          DLLNode* right=head;
          while(right->next!=NULL){
              right=right->next;
          }
          while(left!=right && left->prev!=right){
              swap(left->data,right->data);
              left=left->next;
              right=right->prev;
          }
          return head;
      }
};

// Question 2 : Delete in a doubly linked list
// Link : https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-node-in-doubly-linked-list

// Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
    public:
      // Function to delete a node at given position.
      Node* deleteNode(Node* head, int x) {
          if(head==NULL) return head;
          if(x==1) {
              if(head->next==NULL) {
                  delete head;
                  return NULL;
              }
              else {
                  head=head->next;
                  head->prev=NULL;
                  return head;
              }
          }
          Node *temp=head;
          Node *tempPrev;
          int i=1;
          while(i<x && temp->next!=NULL){
              tempPrev=temp;
              temp=temp->next;
              i++;
          }
          if(temp->next==NULL) tempPrev->next=NULL;
          else {
              tempPrev->next=temp->next;
              (temp->next)->prev=tempPrev;
          }
          return head;
      }
  };