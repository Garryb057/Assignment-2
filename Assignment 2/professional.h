#pragma once
#include "employee.h"

class Professional : public Employee {
private:
	double monthSalary;
	int vacationDays;

public:
	Professional();
	Professional(std::string n, int a, double m, int v);

	//getters
	double getMonthlySalary();
	int getVacationDays();

	//setters
	void setMonthlySalary(double m);
	void setVacationDays(int v);


	double calcWeekSalary() const override;
	double calcHealthCareContributions() const override;
	int calcVacationDays() const override;
};
