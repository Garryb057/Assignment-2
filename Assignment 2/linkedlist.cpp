#include "linkedlist.h"
#include <stdexcept>

linkedList::linkedList() {
    headPtr = nullptr;
    tailPtr = nullptr;
    num_items = 0;
}

void linkedList::push_front(const int item) {
    Node* newNode = new Node;
    newNode->data = item;
    newNode->nextPtr = headPtr;
    headPtr = newNode;
    if (tailPtr == nullptr) {
        tailPtr = newNode;
    }
    num_items++;
}

void linkedList::push_back(const int item) {
    Node* newNode = new Node;
    newNode->data = item;
    newNode->nextPtr = nullptr;
    if (tailPtr == nullptr) {
        headPtr = newNode;
        tailPtr = newNode;
    }
    else {
        tailPtr->nextPtr = newNode;
        tailPtr = newNode;
    }
    num_items++;
}

int linkedList::pop_front() {
    if (headPtr == nullptr) {
        throw std::out_of_range("List is empty");
    }

    Node* removalNode = headPtr;
    int data = removalNode->data;
    headPtr = headPtr->nextPtr;
    delete removalNode;

    if (headPtr == nullptr) {
        tailPtr = nullptr;
    }

    num_items--;
    return data;
}

int linkedList::pop_back() {
    if (tailPtr == nullptr) {
        throw std::out_of_range("List is empty");
    }

    int data = tailPtr->data;

    if (headPtr == tailPtr) {
        delete tailPtr;
        headPtr = nullptr;
        tailPtr = nullptr;
    }
    else {
        Node* current = headPtr;
        while (current->nextPtr != tailPtr) {
            current = current->nextPtr;
        }

        delete tailPtr;
        tailPtr = current;
        tailPtr->nextPtr = nullptr;
    }

    num_items--;
    return data;
}

int linkedList::front() {
    if (headPtr == nullptr) {
        throw std::out_of_range("List is empty");
    }
    return headPtr->data;
}

int linkedList::back() {
    if (tailPtr == nullptr) {
        throw std::out_of_range("List is empty");
    }
    return tailPtr->data;
}

bool linkedList::empty() {
    return headPtr == nullptr;
}

void linkedList::insert(size_t index, const int& item) {
    if (index == 0) {
        push_front(item);
        return;
    }
    else if (index >= num_items) {
        push_back(item);
        return;
    }

    Node* newNode = new Node;
    newNode->data = item;

    Node* current = headPtr;
    for (size_t i = 0; i < index - 1; i++) {
        current = current->nextPtr;
    }

    newNode->nextPtr = current->nextPtr;
    current->nextPtr = newNode;

    num_items++;
}

bool linkedList::remove(size_t index) {
    if (index >= num_items) {
        return false;
    }
    if (index == 0) {
        pop_front();
        return true;
    }
    else if (index == num_items - 1) {
        pop_back();
        return true;
    }

    Node* current = headPtr;
    for (size_t i = 0; i < index - 1; i++) {
        current = current->nextPtr;
    }

    Node* removalNode = current->nextPtr;
    current->nextPtr = removalNode->nextPtr;
    delete removalNode;

    num_items--;
    return true;
}

size_t linkedList::find(const int& item) const {
    Node* current = headPtr;
    size_t index = 0;
    while (current != nullptr) {
        if (current->data == item) {
            return index;
        }
        current = current->nextPtr;
        index++;
    }
    return num_items;
}

int linkedList::itemCount() {
    return num_items;
}