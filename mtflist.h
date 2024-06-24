#ifndef MTFLIST
#define MTFLIST

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

using namespace std;

class Node {
public:
    int data; //data stores the context of an element
    Node* next; //Next stores the address to the next node
};

class linkedList{ //contains a pointer head that points to the first node of the linked list
    
private:
    Node* head;
    Node* tail; //class members
    unsigned long count;
    //unsigned long countTime;
    
public:
    //default constructor initializing head pointer
    linkedList()
    {
        head = NULL;
        tail = NULL;
    }
    //~MTFList(); //make sure to deallocate space properly at the end

//An add method should be implemented (to facilitate the Additions)

//A search method should be implemented (to facilitate the Queries). this method should re-
//organize the list using the move-to-front strategy.

    void addMethod(int); //this adds items to the linked list
    void displayList(); //this displays the linked list
    void moveToFront(int); //Moves the inputted number to the front of the linked list
    void orderList(); //puts the list in order
    unsigned long getCount() const {return count;}
    //unsigned long getCountTime() const {return countTime;}

    
};

#endif
