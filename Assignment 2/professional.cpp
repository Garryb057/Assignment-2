//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu
#include "professional.h"

//Default Constructor for Professional
Professional::Professional() {
	monthSalary = 1000;
	vacationDays = 25;
}
//Overloaded Contructor for Professional
Professional::Professional(std::string n, int a, double m, int v) {
	monthSalary = m;
	vacationDays = v;
}

//Accessors
double Professional::getMonthlySalary() { return monthSalary; }
int Professional::getVacationDays() { return vacationDays; }

//Modifiers
void Professional::setMonthlySalary(double m) { monthSalary = m; }
void Professional::setVacationDays(int v) { vacationDays = v; }

//Function to calculate the weekly salary
double Professional::calcWeekSalary() const {
	return monthSalary / 4;
}
//Function to calculate the Health Care Contributions
double Professional::calcHealthCareContributions() const {
	return 200.0;
}
//Function to calculate the number of vacation days
int Professional::calcVacationDays() const {
	return vacationDays;
}