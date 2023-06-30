#include "professional.h"

Professional::Professional() {
	monthSalary = 1000;
	vacationDays = 25;
}
Professional::Professional(std::string n, int a, double m, int v) {
	monthSalary = m;
	vacationDays = v;
}

double Professional::getMonthlySalary() { return monthSalary; }
int Professional::getVacationDays() { return vacationDays; }

void Professional::setMonthlySalary(double m) { monthSalary = m; }
void Professional::setVacationDays(int v) { vacationDays = v; }

double Professional::calcWeekSalary() const {
	return monthSalary / 4;
}

double Professional::calcHealthCareContributions() const {
	return 200.0;
}

int Professional::calcVacationDays() const {
	return vacationDays;
}