#include "mtflist.h"
#include <chrono>
#include <ctime>
#include <ratio>

using namespace std;
using namespace std::chrono;

//the following steps should be executed by the main method:
//A. Read input file and store data items in both lists.
//B. Record the time and the Traversal Count for the queries in the MTFList.
//C. Display the MTFList after all queries.
//D. Record the time and the Traversal Count for the queries in the orderedList.
//E. Display the orderedList (integers should appear in increasing order)
//F. Display the total retrieval times and Traversal Counts for both Lists, and declare which was
//faster (with respect to time).
//No other outputs should be observed.

//all the things needed to make 100%
// you should have a makefile
// MTFList ADD Method
// MTFList Search Method
// orderedList Add Method
// orderedList search Method
//output as specified
//efficiency
//project report


int main(){
    
    /*steady_clock::time_point t1 = steady_clock::now();

    steady_clock::time_point t2 = steady_clock::now();

    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
*/


    //inputs the file into the linked list and then diplays its content
   // ifstream inputFile("uniform.txt");
    //ifstream outputFile;
    
    //open a file
    ifstream inputFile("test.txt"); //changed
   // inputFile.open("uniform.txt");
    if(!inputFile){
        cout << "Error in opening file of letters";
        return 1; //checks if the file openes
    }

    int numNodes=0;

    inputFile >> numNodes;
    //created an object for our linked list
    linkedList MTFlist;
    int numbers;
    cout << "MTFlist after queries: " << endl;

    //MTFlist.moveToFront(numbers); //this is the search method
    //MTFlist.displayList();
    while(inputFile >> numbers){
        MTFlist.addMethod(numbers);
 
        //MTFlist.moveToFront(numbers); //this is the search method

    }

    MTFlist.moveToFront(numbers);
    MTFlist.displayList();
    cout << "Orderedlist after Queries: " << endl;

    linkedList orderL; //secend object

    MTFlist.orderList();
    MTFlist.displayList();

    orderL.orderList();
    orderL.displayList();

    cout << "Traversal Count for MTFlist: " << MTFlist.getCount() << endl;

    cout << "Traversal Count for Orderedlist: " << orderL.getCount() << endl;

    //cout << "Retrieval time for MTFlist: " << MTFlist.count() << endl;

    //cout << "Retrieval time for Orderedlist: " << orderL.getCountTime() << endl;




    //MTFlist.moveToFront(numbers); //this function does infact work!
    ///////////////////////////////////////////////////////////////////
    

    
////////////////////////////////////////////////
    string dummy;
    getline(inputFile, dummy);


    //linkedList orderL; //secend object
    int numSearches = 0;
    //int elements; //this represents the numbers in my orderedlist
    inputFile >> numSearches; //changed to elements

    //cout << "Orderedlist after Queries: " << endl;
    while (inputFile >> numbers){ 
        orderL.addMethod(numbers); //might be numbers instead of numsearches   
     //orderL.orderList(); //this causes the intergers to be put in orders (mergesort methods)
        //MTFlist.moveToFront(numbers);
    }

    //orderL.orderList(); //this causes the intergers to be put in orders (mergesort methods)


    orderL.displayList();
  
    return 0;

    
}
