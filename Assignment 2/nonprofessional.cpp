//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu
#include "nonprofessional.h"

//Default constructor for NonProfessional
NonProfessional::NonProfessional() {
	hourlyRate = 10;
	workHours = 10;
}
//Overloaded constructor for NonProfessional
NonProfessional::NonProfessional(std::string n, int a, double hr, int wh) {
	hourlyRate = hr;
	workHours = wh;
}

//Accessors for NonProfessional
double NonProfessional::getHourlyRate() { return hourlyRate; }
int NonProfessional::getWorkHours() { return workHours; }

//Modifiers for NonProfessional
void NonProfessional::setHourlyRate(double hr) { hourlyRate = hr; }
void NonProfessional::setWorkHours(int wh) { workHours = wh; }

//Function to calculate the weekly Salary
double NonProfessional::calcWeekSalary() const {
	return hourlyRate * workHours;
}
//Function to calculate the HealthCareContributions
double NonProfessional::calcHealthCareContributions() const {
	double weekSalary = calcWeekSalary();
	return weekSalary * 0.1;
}
//Function to calculate number of vacation days
int NonProfessional::calcVacationDays() const {
	return workHours / 10;
}