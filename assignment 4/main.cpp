//
//  main.cpp
//  assignment 4
//
//  Created by jana hegazy on 13/04/2023.
//
#include "LinkedList.h"
#include <vector>
#include <iostream>
using namespace std;

void insertAfter(int firstValue, int secondValue, vector<int>&  values1)
{
    if(values1.size()==1)
    {
        if(values1[0]==firstValue)
        {
            values1.push_back(secondValue);
    
        }
    }
    else{
        
        for (vector<int>::iterator it = values1.begin(); it != values1.end(); ++it) {
            if(*(it)== firstValue)
            {
                it=values1.insert(it+1, secondValue);
                
            }
          }
    }
   
      cout << endl;

}

LinkedList createLL(vector <int> &values2)
{
    LinkedList myList;
    
    for (vector<int>::iterator it = values2.begin(); it != values2.end(); ++it)
    {
        myList.addNode(*(it));
    }
    
    Node* j= myList.get_head();
    while (j!=NULL)// 1 4 2 3 4 1 4 5 6
    {
        Node * p= j-> next;
        
        while(p !=nullptr)
        {
            if(j->info== p-> info)// dereference makes you look at the thing that is pointed at
            {
                Node* temp= p;
                p=p->next;
                myList.deleteNode(temp);
                j-> counter++;
            }
            else
            {
                p=p-> next;
            }
            
            
        }
        j=j-> next;
    }
    return myList;
}

void printCounters(LinkedList jana)
{
    Node* z= jana.get_head();
    while( z!= nullptr)
    {
        cout << z-> counter << " ";
        z=z-> next;
    }

}
int main()
{
    vector<int> values;
    int n=0;
    int firstValue=0;
    int secondValue=0;
    cout << "Hi! How many values would you want in your vector? ";
    cin >> n;
    cout << "Enter your vector elements: ";
    if(n==0)
    {
        return 0;// fixed error for the memory leak
    }
    for( int i=0; i< n; i++)
    {
        int x=0;
        
        cin >> x;
        values.push_back(x);
    }
    cout << "Insert the first and second value (the one you want after the first value in the linked list!" << endl;
    cin >> firstValue>> secondValue;
    insertAfter(firstValue, secondValue ,values);
    cout << "The revised linked List :";
    LinkedList jana= createLL(values);
    jana.printList();
    
    cout << "The occurence of every number in the list : ";
    printCounters(jana);
    
    cout << "Now the sum of the linked list is: " << jana.sumOfList() << endl;
    
    
    
}
                           
