#pragma once
#include <cstddef>

//Sets up node to have an integer data and the pointer to the next item
struct Node {
	int data;
	Node* nextPtr;
};

//LinkedList class
class linkedList {
private:
	Node* headPtr;
	Node* tailPtr;
	size_t num_items;

public:
	linkedList();
	void push_front(const int item);
	void push_back(const int item);
	int pop_front();
	int pop_back();
	int front();
	int back();
	bool empty();
	void insert(size_t index, const int& item);
	bool remove(size_t index);
	size_t find(const int& item) const;
	int itemCount();
};
