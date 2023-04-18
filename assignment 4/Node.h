//
//  Node.h
//  assignment 4
//
//  Created by jana hegazy on 13/04/2023.
//

#ifndef Node_h
#define Node_h
#include <iostream>
using namespace std;

struct Node{

    int info;
    Node* next;
    Node* back;
    int counter;

    Node() {
        
        next = NULL;
        back = NULL;
        info=0;
        counter=1;
        
    }


};


#endif /* Node_h */
