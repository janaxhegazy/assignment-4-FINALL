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
        if (head == deletion)
        {
            head = head->next;
            if (head != NULL)
            {
                head->back = NULL;
            }
            delete deletion;
        }
        
        Node* previous = head;
        while (previous->next != deletion && previous != NULL )
        {
            previous = previous->next;
        }
        
        if (previous == NULL)
        {
            cout<<"The list is empty! Try another time"<<endl;
            return;
        }
        
        
        
        previous->next = deletion->next;
        if (deletion->next != NULL)
        {
            deletion->next->back = previous;//
            delete deletion;
        }
    }
    int sumOfList()
    {
        int sum=0;
        
        Node* j= this-> get_head();
        
        while (j!= nullptr) {
            sum= sum+ j-> info;
            j=j-> next;
        }
        return sum;
    }
    void printList()
    {
        Node* p;
        p=head;
        
        while(p!= NULL)
        {
            cout << p-> info << " ";
            p=p->next;
        }
        cout << endl;
    }

};

#endif /* LinkedList_h */
