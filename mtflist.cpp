//function that adds items to the linked list 
#include "mtflist.h"
using namespace std::chrono;
void linkedList::addMethod(int d){
    Node* newNode = new Node;
    newNode->data = d;
    
    if (head==NULL){
        head=newNode;
    }

    else{
        Node* temp = head;

        while (temp->next != NULL){
            temp=temp->next;
        }

        temp->next = newNode;
    }
}


//displays the items of the linked list
void linkedList::displayList(){

    Node* current = head;

    while(current != NULL){
        cout << current->data << " ";
        current = current -> next;
    }
    cout << endl;

}
//this is supposed to move an element to the front //this is my search method to look for specfified element
void linkedList::moveToFront(int numIn){
    
    if (head->data == numIn){
        //Do nothing
    }

    else { 

        Node * temp = head->next; //the pointer temp should be equal to the element after head
        Node * tempBehind = head;

        while (temp->data != numIn){
            count++;
            //countTime++; //for the time
            temp=temp->next;
            tempBehind = tempBehind->next;
        }

        if (temp==NULL){
            //Item does not exist
        }

        else {
            tempBehind->next = temp->next;
            temp->next=head;
            head=temp;
        }
    }
}

//edit this list a bit  more
void linkedList::orderList(){
    //node current will point to head
    Node * current = head; //create a pointer for current and same with index
    Node * index = NULL;
    int temp;

    if(head==NULL){ //if statement to indicate if head is NULL
        return;
    } else{
        while(current != NULL){ //run a while loop to see that the current element isnt equal to NULL
            index = current->next;
            while(index!=NULL){
                //If current node's data is greater than index's node data, swap the data between them  
                if(current->data > index->data){
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next; //point to the next element
            }
            current = current->next; //current element should point to the next element
        }
    }

}

//fix this ordered list!!
