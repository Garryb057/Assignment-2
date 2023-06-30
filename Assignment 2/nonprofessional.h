//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu
#pragma once
#include "employee.h"

class NonProfessional : public Employee {
private:
	double hourlyRate;
	int workHours;
public:
	//Constructors
	NonProfessional();
	NonProfessional(std::string n, int a, double hr, int wh);

	//getters
	double getHourlyRate();
	int getWorkHours();

	//setters
	void setHourlyRate(double hr);
	void setWorkHours(int wh);

	//Functions for NonProfessional Class
	double calcWeekSalary() const override;
	double calcHealthCareContributions() const override;
	int calcVacationDays() const override;
};