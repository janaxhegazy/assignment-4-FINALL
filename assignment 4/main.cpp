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
    for (vector<int>::iterator it = values1.begin(); it != values1.end(); ++it) {
        if(*(it)== firstValue)
        {
            values1.insert(it+1, secondValue);
            
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
    
    Node* j;
    j= myList.get_head(); 
    while (myList.get_head()!=NULL)// 1 4 2 3 4 1 4 5 6
    {
        
        
        for(int i=1; i=values2.size(); i++)
        {
            Node* temp = j + i;
            if(j->info== temp-> info)// dereference makes you look at the thing that is pointed at
            {
                j-> counter++;
                myList.deleteNode(temp);
            }
            
            
        }
    }
    return myList;
}
int main()
{
    vector<int> values;
    int n=0;
    int firstValue, secondValue;
    cout << "Hi! How many values would you want in your vector? ";
    cin >> n;
    cout << "Enter your vector elements: ";
    for( int i=0; i< n; i++)
    {
        int x=0;
        
        cin >> x;
        values.push_back(x);
    }
    cout << "Insert the first and second value!" << endl;
    cin >> firstValue>> secondValue;
    insertAfter(firstValue, secondValue ,values);
    cout << "The revised linked List :";
    LinkedList jana= createLL(values);
    jana.printList();
    
    
    
}
                           
