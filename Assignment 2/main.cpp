#include <iostream>
#include "linkedlist.h"
#include "employee.h"
#include "professional.h"
#include "nonprofessional.h"
#include "function.h"

int main() {
	int userChoice;
	
	while (true) {
		userChoice = menu();
		if (userChoice == 1) {
			int userChoiceList;
			linkedList list;
			while (true) {
				userChoiceList = listMenu();
				if (userChoiceList == 1) {
					int val;
					std::cout << "Enter value you would like to push to the front: ";
					std::cin >> val;
					list.push_front(val);
					continue;
				}
				else if (userChoiceList == 2) {
					int val;
					std::cout << "Enter value you would like to push to the back: ";
					std::cin >> val;
					list.push_back(val);
					continue;
				}
				else if (userChoiceList == 3) {
					int val;
					val = list.pop_front();
					std::cout << val << " was removed from the front of the list" << std::endl;
					continue;
				}
				else if (userChoiceList == 4) {
					int val;
					val = list.pop_back();
					std::cout << val << " was removed from the back of the list" << std::endl;
					continue;
				}
				else if (userChoiceList == 5) {
					int val;
					val = list.front();
					std::cout << "Item at the front of the list: " << val << std::endl;
					continue;
				}
				else if (userChoiceList == 6) {
					int val;
					val = list.back();
					std::cout << "Item at the back of the list: " << val << std::endl;
					continue;
				}
				else if (userChoiceList == 7) {
					bool isEmpty = list.empty();
					if (isEmpty == 0) {
						std::cout << "The List is not empty" << std::endl;
					}
					else if (isEmpty == 1){
						std::cout << "The List is empty" << std::endl;
					}
					continue;
				}
				else if (userChoiceList == 8) {
					int index, val;
					std::cout << "Enter the index at which you like to insert: ";
					std::cin >> index;
					std::cout << "Enter the value you would like to insert: ";
					std::cin >> val;
					list.insert(index, val);
					continue;
				}
				else if (userChoiceList == 9) {
					int index;
					std::cout << "Enter the index at which you would like to remove: ";
					std::cin >> index;
					list.remove(index);
					continue;
				}
				else if (userChoiceList == 10) {
					int val;
					std::cout << "Enter the value you would like to find: ";
					std::cin >> val;
					size_t pos = list.find(val);
					if (pos == list.itemCount()) {
						std::cout << "Item not found in list" << std::endl;
					}
					else {
						std::cout << "Item found at position: " << pos << std::endl;
					}
					continue;
				}
				else if (userChoiceList == 11) {
					break;
				}
				else {
					std::cout << "Invalid Input. Please Try Again" << std::endl;
					continue;
				}
			}
		}
		else if (userChoice == 2) {
			
		}
		else if (userChoice == 3) {
			break;
		}
		else {
			std::cout << "Invalid Input. Please enter a number 1-3." << std::endl;
		}
	}
	
	return 0;
}



