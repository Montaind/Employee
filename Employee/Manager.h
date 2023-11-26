#pragma once
#include "Employee.h"
#include "ManagerPosts.h"

class Manager : public Employee{
public:
	Manager();
	Manager(std::string name, int age, std::string sex, ManagerPosts post);
	Manager(Manager& m);
	~Manager();
	int getSalary() override;
	void output() override;
private:
	ManagerPosts post;
};