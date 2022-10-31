#include <iostream>
#include <cctype>
#include <cstring>
#include <stack>
using namespace std;

//Simranjit Bhella
//1/25/2021
//CS163
//The purpose of this code is to set up the structs and classes required for the shopping cart program.
//These include the product struct with information about the products, a cartnode struct, a queuenode struct, a queue class,
// and a shopping class acting as an ADT. the cartnode struct had an array in order to allow for the linked list to have stacks,
// and the queuenode struct is a circular linked list. The queue class has functions to  enqueue, dequeue, and display.
//The shopping class has functions to push, pop, and display.

//This is the product stuct with info on the products
struct product {
    char * name;
    char * description;
    int price;
};

//This is the cartnode struct, its data includes a stack array and a next pointer. This will be used for a linear linked list.
struct cartnode {
    struct product cart[5]; //Stack of 5 products per cartnode
    cartnode * next;
};

//This is the queuenode struct, its data includes a product, and a next pointer. This will be used for a circular linked list.
struct queuenode {
    struct product this_product;
    int filled;
    queuenode * next;
};


class queue {
    public:
        queue(); //Queue class constructor
        ~queue(); //Queue class destructor
        int enqueue(product * to_add); //Function to add a product by passing in product info
        int dequeue(); //Function to remove a product off the top
        int displayR(queuenode * &head);
        int display(); //Function to display all products
        int peek(); //Grabs product for use (somewhere) and moves forward through product list
    private:
        queuenode * rear;
};

class shopping {
    public:
        shopping(); //Shopping class constructor
        ~shopping(); //Shopping class destructor
        int push(product * to_add); //Function to push to stack
        int pop(); //Function to pop from stack
        int display(); //Function to display
    private:
        cartnode * head;
        cartnode * tail;
        int top_index;
};

