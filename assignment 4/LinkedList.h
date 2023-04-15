//
//  LinkedList.h
//  assignment 4
//
//  Created by jana hegazy on 13/04/2023.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
private:
    Node* head;
    Node* tail;
    
public:
 
    LinkedList()
    {
     
    head = NULL;
     
    tail = NULL;
     
    }
     
    Node* get_head()
    {
     
    return head;
     
    }
 
    Node* get_tail() {
        
        return tail;
        
    }
    Node* addNode(int info2)
     
    {
        
        Node* temp = new Node();
        
        temp->info=info2;
        
        if (head == NULL)
        {
            head = temp;
            
            tail = head;
            
        }
        
        else {
            
            temp->back=tail;
            
            tail->next =temp;
            
            temp->next= NULL;
            
            tail = tail->next;
            
        }
        
        return temp;
    }

    
    void deleteNode(Node* deletion)
    {
        Node* q;
        q=head;// mirror pointer
        Node* previous = nullptr;
        if (q == nullptr)// BASECASE
               return;
        while(q!= deletion && q != nullptr ) // q=2
        {
            previous=q;// p=1
            q= q-> next;
        }
        previous-> next=q->next;
        delete q;
        
    }
    void printList()
    {
        Node* p;
        p=head;
        
        while(p!= NULL)
        {
            cout << p-> info;
            p=p->next;
        }
    }

};

#endif /* LinkedList_h */
