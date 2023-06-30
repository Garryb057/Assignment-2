#include "nonprofessional.h"

NonProfessional::NonProfessional() {
	hourlyRate = 10;
	workHours = 10;
}
NonProfessional::NonProfessional(std::string n, int a, double hr, int wh) {
	hourlyRate = hr;
	workHours = wh;
}

double NonProfessional::getHourlyRate() { return hourlyRate; }
int NonProfessional::getWorkHours() { return workHours; }

void NonProfessional::setHourlyRate(double hr) { hourlyRate = hr; }
void NonProfessional::setWorkHours(int wh) { workHours = wh; }

double NonProfessional::calcWeekSalary() const {
	return hourlyRate * workHours;
}

double NonProfessional::calcHealthCareContributions() const {
	double weekSalary = calcWeekSalary();
	return weekSalary * 0.1;
}

int NonProfessional::calcVacationDays() const {
	return workHours / 10;
}