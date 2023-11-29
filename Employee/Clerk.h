#pragma once
#include "Employee.h"

class Clerk : public Employee {
public:
	Clerk();
	Clerk(std::string name, int age, std::string sex, int rep);
	Clerk(Clerk& m);
	~Clerk();
	int getSalary() override;
	void output() override;
private:
	int rep;
};