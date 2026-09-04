#include<iostream>
using namespace std;  
  
  struct Node{
    int data;
    Node * next;
  };
  
  int main(){
    Node * newnode1 = new Node();
    Node * first = new Node();
    Node * second = new Node();
    Node * third = new Node();
    Node * fourth = new Node();
    
    Node * head = newnode1;
    Node * temp = head;
    
    newnode1->data = 5;
    newnode1->next = first;
    head = newnode1;
        
    first->data = 10;
    first->next=second;
    
    second->data= 20;
    second->next = third;
    
    third->data = 30;
    third->next = fourth;
    
    fourth->data = 40;
    fourth->next = NULL;
    
    while(temp != NULL){
      cout<<temp->data<<endl;
      temp = temp->next;
    }
    
    return 0;
  }