//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu
#include "function.h"
#include <iostream>

//Menu to decide what part of assignment to do
int menu() {
	int userChoice;
	std::cout << "1. Linked List" << std::endl;
	std::cout << "2. Company" << std::endl;
	std::cout << "3. Quit" << std::endl;
	std::cout << "Which part of the assignment would you like to run?" << std::endl;
	std::cin >> userChoice;
	return userChoice;
}
//Menu to modify list
int listMenu() {
	int userChoice;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "1. Push to the front of the list" << std::endl;
	std::cout << "2. Push to the back of the list" << std::endl;
	std::cout << "3. Remove from the front of the list" << std::endl;
	std::cout << "4. Remove from the back of the list" << std::endl;
	std::cout << "5. Print front of list" << std::endl;
	std::cout << "6. Print back of list" << std::endl;
	std::cout << "7. Check if list is empty" << std::endl;
	std::cout << "8. Insert item into the list" << std::endl;
	std::cout << "9. Remove item from list" << std::endl;
	std::cout << "10. Find item in list" << std::endl;
	std::cout << "11. Quit" << std::endl;
	std::cout << "Enter Choice: ";
	std::cin >> userChoice;
	return userChoice;
}