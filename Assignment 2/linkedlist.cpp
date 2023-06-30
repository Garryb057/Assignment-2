#include "linkedlist.h"
#include <stdexcept>

//Default Constructor
linkedList::linkedList() {
    headPtr = nullptr;
    tailPtr = nullptr;
    num_items = 0;
}
//Takes in data item and and pushes it to the front of the list
void linkedList::push_front(const int item) {
    Node* newNode = new Node;   //Sets a node pointer to new node
    newNode->data = item;       //Sets the data to the item
    newNode->nextPtr = headPtr; //Sets the nextPtr of newNode to the current headPtr
    headPtr = newNode;          //The newNode becomes the headPtr
    if (tailPtr == nullptr) {   //If the tailPtr is nullptr
        tailPtr = newNode;      //newNode becomes tailPtr
    }
    num_items++;                //Increments num items
}
//Takes in data item and pushes to the back of the list
void linkedList::push_back(const int item) {
    Node* newNode = new Node;           //Sets a node pointer to new node
    newNode->data = item;               //Sets the data to the item
    newNode->nextPtr = nullptr;         //Sets nextPtr of newNode to nullptr
    if (tailPtr == nullptr) {           //if the tailPtr is nullptr
        headPtr = newNode;              //newNode becomes the headPtr
        tailPtr = newNode;              //newNode becomes the tailPtr
    }
    else {                              //If the tailPtr is not the nullptr
        tailPtr->nextPtr = newNode;     //tailPtrs nextPtr becomes the newNode 
        tailPtr = newNode;              //newNode becomes the tailPtr
    }
    num_items++;                        //Increments num_items
}
//Removes the first item in list
int linkedList::pop_front() {
    //If the headPtr is nullptr
    if (headPtr == nullptr) {
        throw std::out_of_range("List is empty");   //Throws an error
    }

    Node* removalNode = headPtr;    //Creates new node and sets to headPtr
    int data = removalNode->data;   //Sets data to headPtr's data
    headPtr = headPtr->nextPtr;     //headPtr becomes the nextPtr
    delete removalNode;             //deletes the node

    if (headPtr == nullptr) {       //if the headPtr is nullptr
        tailPtr = nullptr;          //Sets the tailPtr to nullptr
    }

    num_items--;                    //Decrements num_items
    return data;                    //Returns the data of the node that was removed
}
//Removes the last item in list
int linkedList::pop_back() {
    if (tailPtr == nullptr) {                       //If the tailPtr is nullptr
        throw std::out_of_range("List is empty");   //Throws error
    }

    int data = tailPtr->data;                       //Sets data to tailPtr's data

    if (headPtr == tailPtr) {                       //If headPtr and tailPtr are the same
        delete tailPtr;                             //Deletes the tailPtr
        headPtr = nullptr;                          //Sets headPtr to nullptr
        tailPtr = nullptr;                          //Sets tailPtr to nullptr
    }
    else {                                          //If headPtr and tailPtr are not the same
        Node* current = headPtr;                    //Set current to headPtr
        while (current->nextPtr != tailPtr) {       //Loops while current's nextPtr isn't tailPtr
            current = current->nextPtr;             //Current is set to current's nextPtr
        }

        delete tailPtr;                             //Deletes the tailPtr
        tailPtr = current;                          //TailPtr is set to current
        tailPtr->nextPtr = nullptr;                 //TailPtr's nextPtr is set to nullptr
    }

    num_items--;                                    //Decremennts num_items
    return data;                                    //Returns tailPtr's data
}

//Prints the first item in the list
int linkedList::front() {
    if (headPtr == nullptr) {                       //If the headPtr is set to nullptr
        throw std::out_of_range("List is empty");   //Throws error
    }
    return headPtr->data;                           //Returns the data of headPtr
}

//Prints the last item in the list
int linkedList::back() {                            
    if (tailPtr == nullptr) {                       //If tailPtr is nullptr
        throw std::out_of_range("List is empty");   //Throws error
    }
    return tailPtr->data;                           //Return the data of tailPtr
}
//Checks if the linkedList is empty
bool linkedList::empty() {
    return headPtr == nullptr;                      //Returns 1 or 0 if headPtr is nullptr
}
//Inserts data into the list into a certain index given by user
void linkedList::insert(size_t index, const int& item) {
    if (index == 0) {                               //If the index is 0
        push_front(item);                           //Calls push_front function with the item data
        return;                                     //Returns
    }
    else if (index >= num_items) {                  //If the index is greater than or equal to num_items
        push_back(item);                            //Calls push_back function with the item data
        return;                                     //Returns
    }

    Node* newNode = new Node;                       //Sets a newNode
    newNode->data = item;                           //Sets the data for newNode to the item passed by user

    Node* current = headPtr;                        //Sets current to the headPtr
    for (size_t i = 0; i < index - 1; i++) {        //Loops through the list until index
        current = current->nextPtr;                 //Sets current to current's nextPtr
    }

    newNode->nextPtr = current->nextPtr;            //sets newNode's nextPtr to current nextPtr
    current->nextPtr = newNode;                     //sets current's nextPtr to newNode
          
    num_items++;                                    //Increments num_items
}
//Remove's item from list at user given index
bool linkedList::remove(size_t index) {
    if (index >= num_items) {                       //If the index is greater than num_items
        return false;                               //Returns false
    }
    if (index == 0) {                               //If the index is 0
        pop_front();                                //Calls pop_front() function
        return true;                                //Returns true
    }
    else if (index == num_items - 1) {              //If index is equal to numItems -1
        pop_back();                                 //Calls pop_back() function
        return true;                                //Returns true
    }

    Node* current = headPtr;                        //Sets current Node to headPtr
    for (size_t i = 0; i < index - 1; i++) {        //Loops through the list
        current = current->nextPtr;                 //Sets current to current's nextPtr
    }

    Node* removalNode = current->nextPtr;           //Sets removalNode to current's nextPtr
    current->nextPtr = removalNode->nextPtr;        //Sets current's nextPtr to removalNode's nextPtr
    delete removalNode;                             //Deletes removalNode
                
    num_items--;                                    //Decrements num_items
    return true;                                    //Returns true
}

//Finds item in list
size_t linkedList::find(const int& item) const {
    Node* current = headPtr;                        //Sets current to the headPtr
    size_t index = 0;                               //Sets index to 0
    while (current != nullptr) {                    //While the current doesn't equal nullptr
        if (current->data == item) {                //If current's data is equal to the item passed by user
            return index;                           //Return the index
        }
        current = current->nextPtr;                 //Current is set to current's nexPtr
        index++;                                    //Index is incremented
    }
    return num_items;                               //Return num_items
}
//Function to return the number of items in the list
int linkedList::itemCount() {
    return num_items;
}