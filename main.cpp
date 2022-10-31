#include "shopping.h"

//Simranjit Bhella
//1/28/2021
//CS163
//The purpose of this code is to have a testing application for the ADT that is built in shopping.h with the defined functions in shopping.cpp.
//In this code under function main, this testing takes place through a dummy application with a user nav menu that allows for the testing of different functions.

int main() {

    shopping cart;
    queue list;
    int size = 100;
    int loop = 0;
    int menu = 0;

    do {
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Please choose an option below: " << endl;
    cout << "[1] Add a product to your cart" << endl;
    cout << "[2] Remove latest product from the cart" << endl;
    cout << "[3] Display cart" << endl;
    cout << "[4] Enqueue to product list" << endl;
    cout << "[5] Display product list" << endl;
    cout << "[6] Dequeue product from list" << endl;
    cout << "[Anything Else] Quit the program" << endl << endl;
    cin >> menu;
    cin.ignore(100, '\n');

    //if user wants to add a product to cart
    if (menu == 1) {
        product * item = new product;

        cout<< "Enter product name: ";
        item->name = new char[size];
        cin.get(item->name, size,'\n');
        cin.ignore(100, '\n');

        item->description = new char[size];
        cout<< "Enter product description: ";
        cin.get(item->description, size,'\n');
        cin.ignore(100, '\n');

        cout<< "Enter product price: ";
        cin>> item->price;
        cin.ignore(100, '\n');


        int pushstatus = cart.push(item);
        if (!pushstatus) {
            cout << "Adding product to cart failed" << endl;
        }
    }

    //if user wants to remove a product from cart
    else if (menu == 2) {
        int popstatus = cart.pop();

        if (!popstatus) {
            cout << "Removing product from cart failed" << endl;
        }
    }

    //if user wants to display all products in cart;
    else if (menu == 3) {
        int displaycartstatus = cart.display();

        if (!displaycartstatus) {
            cout << "Displaying cart failed" << endl;
        }
    }

    //if user wants to add to product list
    else if (menu == 4) {
        product * item = new product;

        cout<< "Enter product name: ";
        item->name = new char[size];
        cin.get(item->name, size,'\n');
        cin.ignore(100, '\n');

        item->description = new char[size];
        cout<< "Enter product description: ";
        cin.get(item->description, size,'\n');
        cin.ignore(100, '\n');

        cout<< "Enter product price: ";
        cin>> item->price;
        cin.ignore(100, '\n');

        int enqueuestatus = list.enqueue(item);

        if (!enqueuestatus) {
            cout << "Enqueuing to product list failed" << endl;
        }
    }

    //if user wants to display product list
    else if (menu == 5) {
        int displaystatus = list.display();

        if (!displaystatus) {
            cout << "Displaying product list failed" << endl;
        }
    }
    else if (menu == 6) {
        int dequeuestatus = list.dequeue();

        if (!dequeuestatus) {
            cout << "Dequeuing product from list failed" << endl;
        }
    }
    //If anything else then change quite loop
    else {
    loop = 1;
    }
} while (loop != 1);
}