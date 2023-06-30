#pragma once
#include <string>

class Employee {
protected:
	std::string name;
	int age;
public:
	Employee();
	Employee(std::string n, int a);

	//getters
	std::string getName();
	int getAge();
	
	//setters
	void setName(std::string n);
	void setAge(int a);

	virtual double calcWeekSalary() const = 0;
	virtual double calcHealthCareContributions() const = 0;
	virtual int calcVacationDays() const = 0;
};
