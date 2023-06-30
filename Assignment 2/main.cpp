//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu
#include <iostream>
#include "linkedlist.h"
#include "employee.h"
#include "professional.h"
#include "nonprofessional.h"
#include "function.h"

int main() {
	int userChoice;
	
	//Loops until user wants to quit
	while (true) {
		userChoice = menu();
		//Block of code runs if user inputs 1
		if (userChoice == 1) {
			int userChoiceList;
			linkedList list;	//initializes list
			//Loops until user wants to quit
			while (true) {
				userChoiceList = listMenu();
				//Takes input from user of what they would like to push to the front of the list
				if (userChoiceList == 1) {
					int val;
					std::cout << "Enter value you would like to push to the front: ";
					std::cin >> val;
					list.push_front(val);
					continue;
				}
				//Takes input from the user for what they would like to push to the back of the list
				else if (userChoiceList == 2) {
					int val;
					std::cout << "Enter value you would like to push to the back: ";
					std::cin >> val;
					list.push_back(val);
					continue;
				}
				//Pops from the front of the list
				else if (userChoiceList == 3) {
					int val;
					val = list.pop_front();
					std::cout << val << " was removed from the front of the list" << std::endl;
					continue;
				}
				//Pops from the back of the list
				else if (userChoiceList == 4) {
					int val;
					val = list.pop_back();
					std::cout << val << " was removed from the back of the list" << std::endl;
					continue;
				}
				//Prints the first item in list
				else if (userChoiceList == 5) {
					int val;
					val = list.front();
					std::cout << "Item at the front of the list: " << val << std::endl;
					continue;
				}
				//Prints the last item in list
				else if (userChoiceList == 6) {
					int val;
					val = list.back();
					std::cout << "Item at the back of the list: " << val << std::endl;
					continue;
				}
				//Checks if the list is empty or not
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
				//Takes input from user for what they would like to insert to the list and at what index
				else if (userChoiceList == 8) {
					int index, val;
					std::cout << "Enter the index at which you like to insert: ";
					std::cin >> index;
					std::cout << "Enter the value you would like to insert: ";
					std::cin >> val;
					list.insert(index, val);
					continue;
				}
				//Takes input from user and removes that index from list
				else if (userChoiceList == 9) {
					int index;
					std::cout << "Enter the index at which you would like to remove: ";
					std::cin >> index;
					list.remove(index);
					continue;
				}
				//Takes input from user and finds that in list
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
				//Ends the loop if the user inputs 11
				else if (userChoiceList == 11) {
					break;
				}
				//Restarts the loop due to an invalid input
				else {
					std::cout << "Invalid Input. Please Try Again" << std::endl;
					continue;
				}
			}
		}
		//Block of code Runs if the user inputs 2
		else if (userChoice == 2) {
			//Sets the Professional Person's name, age, salar, and vacation days.
			Professional person1;
			person1.setName("Jeff Dahmer");
			person1.setAge(25);
			person1.setMonthlySalary(10000);
			person1.setVacationDays(25);
			
			//Calculates Weekly salary and health care contributions for person1.
			int weekSalary;
			weekSalary = person1.calcWeekSalary();
			int healthCareContributions;
			healthCareContributions = person1.calcHealthCareContributions();

			//Prints out information of person1
			std::cout << person1.getName() << " is a professional at our company. He is " << person1.getAge()
				<< " years old. Jeff earns $" << person1.getMonthlySalary() << " and has " << person1.getVacationDays()
				<< " vacation days. His weekly salary is $" << weekSalary << std::endl;

			//Sets the NonProfessional Person's name, age, hourly rate, and work hours.
			NonProfessional person2;
			person2.setName("Ted Bundy");
			person2.setAge(28);
			person2.setHourlyRate(32);
			person2.setWorkHours(42);
			
			//Calculates person2's weekly salary, health care contributions, and vacation days.
			int weekSalary2;
			weekSalary2 = person2.calcWeekSalary();
			int healthCareContributions2;
			healthCareContributions2 = person2.calcHealthCareContributions();
			int vacationDays2;
			vacationDays2 = person2.calcVacationDays();

			//Prints out information of person2
			std::cout << person2.getName() << " is not a professional at our company. He is " << person2.getAge()
				<< " years old. Ted earned $" << weekSalary2 << " this week and earned " << vacationDays2
				<< " vacation hours. He has also earned $" << healthCareContributions2 << " in health care contributions this week." << std::endl;
		}
		//Block of Code Runs if user inputs 3
		else if (userChoice == 3) {
			break;
		}
		//Restarts Loop if input is invalid
		else {
			std::cout << "Invalid Input. Please enter a number 1-3." << std::endl;
		}
	}
	
	return 0;
}



