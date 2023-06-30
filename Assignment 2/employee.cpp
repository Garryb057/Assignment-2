#include "employee.h"

//Default Constructor for Employee
Employee::Employee() {
	name = "";
	age = 0;
}

//Overloaded Constructor for Employee
Employee::Employee(std::string n, int a) {
	name = n;
	age = a;
}

//Modifiers
std::string Employee::getName() { return name; }
int Employee::getAge() { return age; }

//Accessors
void Employee::setName(std::string n) { name = n; }
void Employee::setAge(int a) { age = a; }
