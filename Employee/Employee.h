#pragma once
#include <iostream>
#include <string>


class Employee {
public:
	Employee();
	Employee(std::string name, int age, std::string sex);
	Employee(Employee& m);
	~Employee();
	std::string getName();
	std::string getSex();
	int getAge();
	void setName(std::string name);
	void setAge(int age);
	void setSex(std::string sex);
protected:
	std::string name;
	int age;
	std::string sex;
};