#pragma once
#include "Employee.h"
class Worker : public Employee {
public:
	Worker();
	Worker(std::string name, int age, std::string sex, int enter, int exit, int productivity);
	Worker(Worker& m);
	~Worker();
	int getSalary() override;
	void output() override;
private:
	int enter;
	int exit;
	int productivity;
};