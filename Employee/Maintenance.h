#pragma once
#include "Employee.h"

class Maintenance : public Employee {
public:
	Maintenance();
	Maintenance(std::string name, int age, std::string sex, std::string schedule);
	Maintenance(Maintenance& m);
	~Maintenance();
	int getSalary() override;
	void output() override;
private:
	std::string schedule;
};