#include "shopping.h"
//Simranjit Bhella
//1/28/2021
//CS163
//The purpose of this file is to implement the functions from shopping.h:
//From queue class:
//queue();
//~queue();
//int enqueue(char * name, char * description, int price);
//int dequeue(char * to_remove_name);
//int display();
//
//From shopping class:
//shopping();
//~shopping();
//int push(const product & to_add);
//int pop();
//int display();
//As ADT classes, all function do not directly interact with the appliction (except for display functionality).
//ALl functions besides constructor and destructor return 0 or 1 to announce failure or success.

//Shopping Constructor
shopping::shopping() {
    cartnode * head = new cartnode;
    top_index = 0;
}

//Shopping Destructor
shopping::~shopping() {
    delete head;
    top_index = 0;
}


int shopping::push(product * to_add) {
    //If no data return error
    if (!to_add->name) {
        return 0;
    }

    if (head == nullptr) {
        head = new cartnode;
    }

    cartnode * tmp = head;

    //If stack is full add new node and link it up
    if (top_index == 5) {
        cartnode * next = new cartnode;
        next->next = tmp;
        head = next;
        tmp = head;
        top_index = 0;
    }

    //Dynamically allocate arrays for product info in cart and use top_index to find first available spot
    tmp->cart[top_index].name = new char[strlen(to_add->name)+1];
    strcpy(tmp->cart[top_index].name, to_add->name);

    tmp->cart[top_index].description = new char[strlen(to_add->description)+1];
    strcpy(tmp->cart[top_index].description, to_add->description);

    tmp->cart[top_index].price = to_add->price;

    top_index += 1;

    return 1;
}

//Function to pop latest item in list
int shopping::pop() {

    //if no items return error
    if (top_index == 0) {
        return 0;
    }

    //set all data to null to pop
    head->cart[top_index-1].name = nullptr;
    head->cart[top_index-1].price = 0;
    head->cart[top_index-1].description = nullptr;

    //deincrement top index
    top_index --;
    return 1;
}
//function to display iteratively, replaced by recursive function
int shopping::display() {

    //If no list return error
    if (head == nullptr) {
        return 0;
    }


    cartnode *tmp = head;
    int cart = 1;
    //increment through LLL
    while(tmp) {
        cout << "Cart" << " " << cart << endl;
        //Loop for all 5 items in stack
        for(int i = 0; i < 5; i++) {
            //if there is data then print
            if(tmp->cart[i].name) {
                cout << tmp->cart[i].name << ": " << tmp->cart[i].description << " = " << tmp->cart[i].price << endl;
            }
        }
        tmp = tmp->next;
        cart += 1;
    }
    return 1;
}





queue::queue() { //Queue class constructor
    rear = new queuenode;
    rear->this_product.name == nullptr;
    rear->this_product.description == nullptr;
    rear->this_product.price == 0;
    rear->filled == 0;

}
queue::~queue() { //Queue class destructor
    delete rear;

}

int queue::enqueue(product * to_add) {

    //If no data return error
    if (!to_add->name) {
        return 0;
    }

    if (rear->filled == 0) {
        //If rear not assigned, create new node and assign rear,
        queuenode * tmp = new queuenode;

        tmp->this_product.name = new char[strlen(to_add->name)+1];
        strcpy(tmp->this_product.name, to_add->name);

        tmp->this_product.description = new char[strlen(to_add->description)+1];
        strcpy(tmp->this_product.description, to_add->description);

        tmp->this_product.price = to_add->price;


        rear = tmp;
        tmp->next = rear;

        rear->filled = 1;
        return 1;
    }



    //Otherwise, new node and instert.
    queuenode * tmp = new queuenode;

    tmp->this_product.name = new char[strlen(to_add->name)+1];
    strcpy(tmp->this_product.name, to_add->name);

    tmp->this_product.description = new char[strlen(to_add->description)+1];
    strcpy(tmp->this_product.description, to_add->description);

    tmp->this_product.price = to_add->price;

    tmp->next = rear->next;
    rear->next = tmp;

    rear->filled = 1;

    return 1;

    }

//Display function wrapper for product list
int queue::display() {
    //if no list
    if (!rear) {
        return 0;
    }

    //if only 1 node is in the list
    if (rear->next == rear) {
        cout << rear->this_product.name << ": " << rear->this_product.description << " = " << rear->this_product.price << endl;
        return 1;
    }



    int success = displayR(rear->next); //call recursive function

    //print rear (not sure why actual function doesn't, this was easiest work around)
    cout << rear->this_product.name << ": " << rear->this_product.description << " = " << rear->this_product.price << endl;

    return success;
}

//Recursive display function for product list.
int queue::displayR(queuenode * &tmp) {
    //This is the loop break, when tmp = rear we have gone through list
    if(tmp == rear) {
        return 1;
    }
    else {
        cout << tmp->this_product.name << ": " << tmp->this_product.description << " = " << tmp->this_product.price << endl;
        displayR(tmp->next); //recursive call
    }

    return 1;

}


//Iterative version of display function
//int queue::display() {
//    if (rear == nullptr) {
//        return 0;
//    }
//
//    //if only 1 node is in the list
//    if (rear->next == rear) {
//        cout << rear->this_product.name << ": " << rear->this_product. description << " = " << rear->this_product.price << endl;
//        return 1;
//    }
//
//    //traverse through and print
//    queuenode * tmp = rear->next;
//    //increment through LLL
//    while(tmp != rear) {
//        cout << tmp->this_product.name << ": " << tmp->this_product. description << " = " << tmp->this_product.price << endl;
//        tmp = tmp->next;
//    }
//    tmp = tmp->next;
//    cout << tmp->this_product.name << ": " << tmp->this_product. description << " = " << tmp->this_product.price << endl;
//    return 1;
//}

//Dequeue function removes node after rear
int queue::dequeue() {
    //if no list return 0
    if (!rear) {
        return 0;
    }

    //if only 1 node delete the rear
    if (rear->next == rear) {
        delete rear;
    }

    //if only two nodes delete and link
    if (rear->next->next == rear) {
        delete rear->next;
        rear->next = rear;

    }

    //otherwise create tmp pointer to delete node and link up
    queuenode * tmp = rear;
    rear->next = rear->next->next;
    delete tmp->next;
}

//Peek function (still don't understand what it's supposed to do...
//Right now it stores the current product for use somwhere and then moves to the next product.
int queue::peek() {
    if (!rear) {
        return 0;
    }
    product peek_product = rear->next->this_product;

    rear= rear->next;

}