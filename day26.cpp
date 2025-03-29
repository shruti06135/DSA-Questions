#include<bits/stdc++.h>
using namespace std;

// Question 1 : Doubly linked list Insertion at given position
// Link : https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list

/* a Node of the doubly linked list
struct Node {
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; 
*/

// Function to insert a new node at given position in doubly linked list.
class Solution {
    public:
      // Function to insert a new node at given position in doubly linked list.
      Node *addNode(Node *head, int pos, int data) {
          struct Node *nn;
          nn=new Node(data);
          nn->data=data;
          nn->next=NULL;
          nn->prev=NULL;
          if(head==NULL) return head=nn;
          struct Node* temp=head;
          int i=0;
          while(i<pos && temp->next!=NULL){
              temp=temp->next;
              i++;
          }
          if(temp->next!=NULL) (temp->next)->prev=nn;
          nn->next=temp->next;
          nn->prev=temp;
          temp->next=nn;
          return head;
      }
};

// Question 2 : Search in Linked List
// Link : https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-linked-list-1664434326

/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
    public:
      // Function to count nodes of a linked list.
      bool searchKey(int n, Node* head, int key) {
          Node* temp=head;
          int i=0;
          while(i<n){
              if(temp->data==key) return true;
              if(temp->next==NULL) break;
              temp=temp->next;
              i++;
          }
          return false;
      }
};