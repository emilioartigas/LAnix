#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"

using namespace std;


void PQueue::push(void *d, int p)
{
	/* Your code here */
  Node* temp = new Node();
  temp->data = d;
  temp->priority = p;
  
  if(front == NULL){
    front = temp;
  }
  else{
    Node* node = front;
    Node* prev = NULL;

    while(node != NULL){
      if(node->priority > temp->priority){
        break;
      }
      else{
        prev = node;
        node = node->next;
      }
    }

    if(node == front){
      temp->next = front;
      front = temp;
    }
    else{
      temp->next = node;
      prev->next = temp;
    }

  }
  
} 

void* PQueue::top()
{
	/* Your code here */
  if(front == NULL){
    return NULL;
  }
  else{
    return front->data;
  }
}


void PQueue::pop()
{
	/* Your code here */
  if(front == NULL){
    return;
  }
  front = front->next;  
}


void PQueue::display()
{

	/* Your code here */
  struct Node* ptr;
  ptr = front;
  if(front == NULL){
    cout<<("nothing to see here...");
    return;
  }
  else{
    while(ptr != NULL){
      /* Use the following out command for the data */
      cout<<ptr->priority<<" "<<(char*)ptr->data<<endl;
      ptr = ptr->next;
    }
  }

}
