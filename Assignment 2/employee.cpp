#include "employee.h"

Employee::Employee() {
	name = "";
	age = 0;
}

Employee::Employee(std::string n, int a) {
	name = n;
	age = a;
}

std::string Employee::getName() { return name; }
int Employee::getAge() { return age; }

void Employee::setName(std::string n) { name = n; }
void Employee::setAge(int a) { age = a; }
